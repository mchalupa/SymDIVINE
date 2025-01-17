#pragma once

/**
 * @author Jan Mr�zek
 * Implementation of graph related functionality for SymDivine
 */

#include <vector>
#include <unordered_map>
#include <stdexcept>

/**
 * Empty info struct
 */
struct NoInfo {
    NoInfo() {}
};

/**
 * Exception for graph runtime errors
 */
class GraphException : public std::runtime_error {
public:
    GraphException(const std::string& msg) : runtime_error(msg) {}
};


/**
 * Universal graph class. Implemented using adjacency list
 * VertexId is unique identification for vertex. It has to be hashable.
 *    Default hash is std::hash, but it can be overridden via last argument
 */
template <class VertexId, class VertexInfo = NoInfo, class EdgeInfo = NoInfo,
    class VertexHasher = std::hash<VertexId>, class VertexEq = std::equal_to<VertexId> >
class Graph {
public:
    Graph() : last_check_valid(false), last_res(vertices.end()) { }

    /**
     * Inserts new vertex into graph.
     * @param id id of the new vertex
     * @param args arguments for constructor of VertexInfo
     * @return true, when insertion succeeded, false otherwise
     */
    template <class... Args>
    bool add_vertex(VertexId id, Args...args) {
        last_check_valid = false;
        auto res = vertices.find(id);
        if (res != vertices.end())
            return false;
        Vertex v{ VertexInfo(args...), std::vector<VertexId>(), std::vector<EdgeInfo>() };
        vertices.insert(std::make_pair(id, v));
        return true;
    }

    /**
     * Removes vertex from graph
     * @param id id of vertex to remove
     * @return true if the removal was successful
     */
    bool remove_vertex(VertexId id) {
        last_check_valid = false;
        auto res = vertices.find(id);
        if (res == vertices.end())
            return false;
        vertices.erase(res);
        return true;
    }

    /**
     * Adds new edge with given EdgeInfo. Performs no check, throws GraphException.
     * Vertice aren't created.
     * @param from
     * @param to
     * @param args arguments for EdgeInfo constructor
     */
    template <class... Args>
    void add_edge(VertexId from, VertexId to, Args...args) {
        try {
            Vertex& info = vertices.at(from);
            info.neighbors.push_back(to);
            info.edge_info.push_back(EdgeInfo(args...));
        }
        catch (std::out_of_range&) {
            throw GraphException("From vertex does not exist!");
        }
    }

    /**
     * Adds new edge with given EdgeInfo. Check whether both vertices exists.
     * @param from
     * @param to
     * @param args arguments for constructor of EdgeInfo
     * @return true if the edge was successfully added, false if one of the
     *         vertices is missing
     */
    template <class...Args>
    bool add_edge_checked(VertexId from, VertexId to, Args...args) {
        auto res = vertices.find(from);
        if (res == vertices.end())
            return false;
        if (vertices.find(to) == vertices.end())
            return false;
        Vertex& info = res.second;
        info.neighbors.push_back(to);
        info.edge_info.push_back(EdgeInfo(args...));
    }

    /**
     * Inserts successors of given vertex
     * @param from
     * @param succ list of successors. Duplicates are ignored
     * @param vInfo list of successors props. Default no info (default constructor
     *        of VertexInfo is called). Has to have the same size as succ or be
     *        empty.
     * @param eInfo list of edge properties to successors. Default no info
     *        (default constructor of EdgeInfo is called). Has to have the same
     *        size as succ or be empty.
     * @return true, if from exists, false otherwise
     */
    bool add_successors(VertexId from, const std::vector<VertexId>& succ,
        const std::vector<VertexInfo>& v_info = {},
        const std::vector<EdgeInfo>& e_info = {})
    {
        assert((v_info.empty() && e_info.empty()) ||
            (succ.size() == v_info.size() && succ.size() == e_info.size()));

        last_check_valid = false;

        auto res = vertices.find(from);
        if (res == vertices.end())
            return false;

        Vertex& info = res->second;

        if (v_info.empty()) {
            for (const auto& s : succ)
                add_vertex(s);
        }
        else {
            for (auto id = succ.begin(), info = v_info.begin();
                id != succ.end(); ++id, ++info)
            {
                add_vertex(*id, *info);
            }
        }
	    std::copy(succ.begin(), succ.end(), std::back_inserter(info.neighbors));

        for (size_t i = 0; e_info.empty() && i != succ.size(); i++)
            info.edge_info.push_back(EdgeInfo());

        std::copy(e_info.begin(), e_info.end(), std::back_inserter(info.edge_info));

        return true;
    }

    /**
     * Returns all successors of the given vertex
     */
    const std::vector<VertexId>& get_successors(VertexId id) {
        if ((!last_check_valid || last_check != id) && !exists(id))
            throw GraphException("No such vertex!");
        if (last_res != vertices.end())
            return last_res->second.neighbors;
        throw GraphException("No such vertex!");
    }

    const std::vector<VertexId>& get_successors(VertexId id) const {
        auto res = vertices.find(id);
        if (res == vertices.end())
            throw GraphException("No such vertex!");
        return res->second.neighbors;
    }

    /**
     * Returns corresponding edge info for successors
     */
    const std::vector<EdgeInfo>& get_successors_edges(VertexId id) {
        if ((!last_check_valid || last_check != id) && !exists(id))
            throw GraphException("No such vertex!");
        if (last_res != vertices.end())
            return last_res->second.edge_info;
        throw GraphException("No such vertex!");
    }

    const std::vector<EdgeInfo>& get_successors_edges(VertexId id) const {
        auto res = vertices.find(id);
        if (res == vertices.edn())
            throw GraphException("No such vertex!");
        return res->second.edge_info;
    }

    /**
     * Returns corresponding vertex info for succesros
     */
    std::vector<VertexInfo> get_successors_info(VertexId id) {
        std::vector<VertexInfo> ret;
        auto succ = get_successors(id);
        for (const auto& s : succ)
            ret.push_back(get_vertex_info(s));
        return ret;
    }

    std::vector<VertexInfo> get_successors_info(VertexId id) const {
        std::vector<VertexInfo> ret;
        auto succ = get_successors(id);
        for (const auto& s : succ)
            ret.push_back(get_vertex_info(s));
        return ret;
    }

    /**
     * Return true if given vertex exists
     */
    bool exists(VertexId id) {
        last_check_valid = true;
        last_check = id;
        last_res = vertices.find(id);
        return last_res != vertices.end();
    }

    VertexInfo& get_vertex_info(VertexId id) {
        if ((!last_check_valid || last_check != id) && !exists(id))
            throw GraphException("No such vertex!");
        if (last_res != vertices.end())
            return last_res->second.vertex_info;
        throw GraphException("No such vertex!");
    }
    
    const VertexInfo& get_vertex_info(VertexId id) const {
        auto res = vertices.find(id);
        if (res == vertices.end())
            throw GraphException("No such vertex!");
        return res->second.vertex_info;
    }

    // ToDo: Implement other operations including BATCH!

private:
    /**
     * Stores all information about vertex including adjacency list
     */
    struct Vertex {
        VertexInfo vertex_info; // Information about the vertex
        std::vector<VertexId> neighbors; // Adjacency list
        std::vector<EdgeInfo> edge_info; // Edge properties
    };

    std::unordered_map<VertexId, Vertex, VertexHasher, VertexEq> vertices;

    bool last_check_valid;
    VertexId last_check;
    typename std::unordered_map<VertexId, Vertex, VertexHasher, VertexEq>::iterator last_res;
};