IF (TERMINFO_INCLUDE_DIR)
  SET(TERMINFO_FIND_QUIETLY TRUE)
ENDIF (TERMINFO_INCLUDE_DIR)

SET(TERMINFO_INCLUDE_DIR)

SET(TERMINFO_NAMES tinfo libtinfo ltinfo lttinfo)
FIND_LIBRARY(TERMINFO_LIBRARY NAMES ${TERMINFO_NAMES} )

# handle the QUIETLY and REQUIRED arguments and set TERMINFO_FOUND to TRUE if 
# all listed variables are TRUE
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(Terminfo DEFAULT_MSG LIBDL_LIBRARY)

IF(TERMINFO_FOUND)
  SET( TERMINFO_LIBRARIES ${TERMINFO_LIBRARY} )
ELSE(TERMINFO_FOUND)
  SET( TERMINFO_LIBRARIES )
ENDIF(TERMINFO_FOUND)

MARK_AS_ADVANCED( TERMINFO_LIBRARY TERMINFO_INCLUDE_DIR )