extern char __VERIFIER_nondet_char(void);
extern int __VERIFIER_nondet_int(void);
extern long __VERIFIER_nondet_long(void);
extern void *__VERIFIER_nondet_pointer(void);
extern int __VERIFIER_nondet_int();
/* Generated by CIL v. 1.3.6 */
/* print_CIL_Input is true */

#line 4 "s3_clnt_1.cil.c"
int ssl3_connect(int initial_state ) 
{ int s__info_callback = __VERIFIER_nondet_int() ;
  int s__in_handshake = __VERIFIER_nondet_int() ;
  int s__state ;
  int s__new_session ;
  int s__server ;
  int s__version = __VERIFIER_nondet_int() ;
  int s__type ;
  int s__init_num ;
  int s__bbio = __VERIFIER_nondet_int() ;
  int s__wbio = __VERIFIER_nondet_int() ;
  int s__hit = __VERIFIER_nondet_int() ;
  int s__rwstate ;
  int s__init_buf___0 ;
  int s__debug = __VERIFIER_nondet_int() ;
  int s__shutdown ;
  int s__ctx__info_callback = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_connect_renegotiate = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_connect = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_hit = __VERIFIER_nondet_int() ;
  int s__ctx__stats__sess_connect_good = __VERIFIER_nondet_int() ;
  int s__s3__change_cipher_spec ;
  int s__s3__flags ;
  int s__s3__delay_buf_pop_ret ;
  int s__s3__tmp__cert_req = __VERIFIER_nondet_int() ;
  int s__s3__tmp__new_compression = __VERIFIER_nondet_int() ;
  int s__s3__tmp__reuse_message = __VERIFIER_nondet_int() ;
  int s__s3__tmp__new_cipher = __VERIFIER_nondet_int() ;
  int s__s3__tmp__new_cipher__algorithms = __VERIFIER_nondet_int() ;
  int s__s3__tmp__next_state___0 ;
  int s__s3__tmp__new_compression__id = __VERIFIER_nondet_int() ;
  int s__session__cipher ;
  int s__session__compress_meth ;
  int buf ;
  unsigned long tmp ;
  unsigned long l ;
  int num1 ;
  int cb ;
  int ret ;
  int new_state ;
  int state ;
  int skip ;
  int tmp___0 ;
  int tmp___1 = __VERIFIER_nondet_int() ;
  int tmp___2 = __VERIFIER_nondet_int() ;
  int tmp___3 = __VERIFIER_nondet_int() ;
  int tmp___4 = __VERIFIER_nondet_int() ;
  int tmp___5 = __VERIFIER_nondet_int() ;
  int tmp___6 = __VERIFIER_nondet_int() ;
  int tmp___7 = __VERIFIER_nondet_int() ;
  int tmp___8 = __VERIFIER_nondet_int() ;
  int tmp___9 = __VERIFIER_nondet_int() ;
  int blastFlag ;
  int __cil_tmp55 ;
  long __cil_tmp56 ;
  long __cil_tmp57 ;
  long __cil_tmp58 ;
  long __cil_tmp59 ;
  long __cil_tmp60 ;
  long __cil_tmp61 ;
  long __cil_tmp62 ;
  long __cil_tmp63 ;
  long __cil_tmp64 ;
  ;
  {
#line 60
  s__state = initial_state;
#line 61
  blastFlag = 0;
#line 62
  tmp = __VERIFIER_nondet_int();
#line 63
  cb = 0;
#line 64
  ret = -1;
#line 65
  skip = 0;
#line 66
  tmp___0 = 0;
#line 67
  if (s__info_callback != 0) {
#line 68
    cb = s__info_callback;
  } else {
#line 70
    if (s__ctx__info_callback != 0) {
#line 71
      cb = s__ctx__info_callback;
    }
  }
#line 76
  s__in_handshake ++;
#line 77
  if (tmp___1 - 12288) {
#line 78
    if (tmp___2 - 16384) {

    }
  }
  {
#line 87
  while (1) {
    while_0_continue: /* CIL Label */ ;
#line 89
    state = s__state;
#line 90
    if (s__state == 12292) {
      goto switch_1_12292;
    } else {
#line 93
      if (s__state == 16384) {
        goto switch_1_16384;
      } else {
#line 96
        if (s__state == 4096) {
          goto switch_1_4096;
        } else {
#line 99
          if (s__state == 20480) {
            goto switch_1_20480;
          } else {
#line 102
            if (s__state == 4099) {
              goto switch_1_4099;
            } else {
#line 105
              if (s__state == 4368) {
                goto switch_1_4368;
              } else {
#line 108
                if (s__state == 4369) {
                  goto switch_1_4369;
                } else {
#line 111
                  if (s__state == 4384) {
                    goto switch_1_4384;
                  } else {
#line 114
                    if (s__state == 4385) {
                      goto switch_1_4385;
                    } else {
#line 117
                      if (s__state == 4400) {
                        goto switch_1_4400;
                      } else {
#line 120
                        if (s__state == 4401) {
                          goto switch_1_4401;
                        } else {
#line 123
                          if (s__state == 4416) {
                            goto switch_1_4416;
                          } else {
#line 126
                            if (s__state == 4417) {
                              goto switch_1_4417;
                            } else {
#line 129
                              if (s__state == 4432) {
                                goto switch_1_4432;
                              } else {
#line 132
                                if (s__state == 4433) {
                                  goto switch_1_4433;
                                } else {
#line 135
                                  if (s__state == 4448) {
                                    goto switch_1_4448;
                                  } else {
#line 138
                                    if (s__state == 4449) {
                                      goto switch_1_4449;
                                    } else {
#line 141
                                      if (s__state == 4464) {
                                        goto switch_1_4464;
                                      } else {
#line 144
                                        if (s__state == 4465) {
                                          goto switch_1_4465;
                                        } else {
#line 147
                                          if (s__state == 4466) {
                                            goto switch_1_4466;
                                          } else {
#line 150
                                            if (s__state == 4467) {
                                              goto switch_1_4467;
                                            } else {
#line 153
                                              if (s__state == 4480) {
                                                goto switch_1_4480;
                                              } else {
#line 156
                                                if (s__state == 4481) {
                                                  goto switch_1_4481;
                                                } else {
#line 159
                                                  if (s__state == 4496) {
                                                    goto switch_1_4496;
                                                  } else {
#line 162
                                                    if (s__state == 4497) {
                                                      goto switch_1_4497;
                                                    } else {
#line 165
                                                      if (s__state == 4512) {
                                                        goto switch_1_4512;
                                                      } else {
#line 168
                                                        if (s__state == 4513) {
                                                          goto switch_1_4513;
                                                        } else {
#line 171
                                                          if (s__state == 4528) {
                                                            goto switch_1_4528;
                                                          } else {
#line 174
                                                            if (s__state == 4529) {
                                                              goto switch_1_4529;
                                                            } else {
#line 177
                                                              if (s__state == 4560) {
                                                                goto switch_1_4560;
                                                              } else {
#line 180
                                                                if (s__state == 4561) {
                                                                  goto switch_1_4561;
                                                                } else {
#line 183
                                                                  if (s__state == 4352) {
                                                                    goto switch_1_4352;
                                                                  } else {
#line 186
                                                                    if (s__state == 3) {
                                                                      goto switch_1_3;
                                                                    } else {
                                                                      goto switch_1_default;
#line 191
                                                                      if (0) {
                                                                        switch_1_12292: 
#line 193
                                                                        s__new_session = 1;
#line 194
                                                                        s__state = 4096;
#line 195
                                                                        s__ctx__stats__sess_connect_renegotiate ++;
                                                                        switch_1_16384: ;
                                                                        switch_1_4096: ;
                                                                        switch_1_20480: ;
                                                                        switch_1_4099: 
#line 200
                                                                        s__server = 0;
#line 201
                                                                        if (cb != 0) {

                                                                        }
                                                                        {
#line 206
                                                                        __cil_tmp55 = s__version - 65280;
#line 206
                                                                        if (__cil_tmp55 != 768) {
#line 207
                                                                          ret = -1;
                                                                          goto end;
                                                                        }
                                                                        }
#line 212
                                                                        s__type = 4096;
#line 213
                                                                        if (s__init_buf___0 == 0) {
#line 214
                                                                          buf = __VERIFIER_nondet_int();
#line 215
                                                                          if (buf == 0) {
#line 216
                                                                            ret = -1;
                                                                            goto end;
                                                                          }
#line 221
                                                                          if (! tmp___3) {
#line 222
                                                                            ret = -1;
                                                                            goto end;
                                                                          }
#line 227
                                                                          s__init_buf___0 = buf;
                                                                        }
#line 231
                                                                        if (! tmp___4) {
#line 232
                                                                          ret = -1;
                                                                          goto end;
                                                                        }
#line 237
                                                                        if (! tmp___5) {
#line 238
                                                                          ret = -1;
                                                                          goto end;
                                                                        }
#line 243
                                                                        s__state = 4368;
#line 244
                                                                        s__ctx__stats__sess_connect ++;
#line 245
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4368: ;
                                                                        switch_1_4369: 
#line 249
                                                                        s__shutdown = 0;
#line 250
                                                                        ret = __VERIFIER_nondet_int();
#line 251
                                                                        if (blastFlag == 0) {
#line 252
                                                                          blastFlag = 1;
                                                                        }
#line 256
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 261
                                                                        s__state = 4384;
#line 262
                                                                        s__init_num = 0;
#line 263
                                                                        if (s__bbio != s__wbio) {

                                                                        }
                                                                        goto switch_1_break;
                                                                        switch_1_4384: ;
                                                                        switch_1_4385: 
#line 271
                                                                        ret = __VERIFIER_nondet_int();
#line 272
                                                                        if (blastFlag == 1) {
#line 273
                                                                          blastFlag = 2;
                                                                        }
#line 277
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 282
                                                                        if (s__hit) {
#line 283
                                                                          s__state = 4560;
                                                                        } else {
#line 285
                                                                          s__state = 4400;
                                                                        }
#line 287
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4400: ;
                                                                        switch_1_4401: ;
#line 291
                                                                        if (s__s3__tmp__new_cipher__algorithms - 256) {
#line 292
                                                                          skip = 1;
                                                                        } else {
#line 294
                                                                          ret = __VERIFIER_nondet_int();
#line 295
                                                                          if (blastFlag == 2) {
#line 296
                                                                            blastFlag = 3;
                                                                          }
#line 300
                                                                          if (ret <= 0) {
                                                                            goto end;
                                                                          }
                                                                        }
#line 306
                                                                        s__state = 4416;
#line 307
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4416: ;
                                                                        switch_1_4417: 
#line 311
                                                                        ret = __VERIFIER_nondet_int();
#line 312
                                                                        if (blastFlag == 3) {
#line 313
                                                                          blastFlag = 4;
                                                                        }
#line 317
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 322
                                                                        s__state = 4432;
#line 323
                                                                        s__init_num = 0;
#line 324
                                                                        if (! tmp___6) {
#line 325
                                                                          ret = -1;
                                                                          goto end;
                                                                        }
                                                                        goto switch_1_break;
                                                                        switch_1_4432: ;
                                                                        switch_1_4433: 
#line 333
                                                                        ret = __VERIFIER_nondet_int();
#line 334
                                                                        if (blastFlag == 5) {
                                                                          goto ERROR;
                                                                        }
#line 339
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 344
                                                                        s__state = 4448;
#line 345
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4448: ;
                                                                        switch_1_4449: 
#line 349
                                                                        ret = __VERIFIER_nondet_int();
#line 350
                                                                        if (blastFlag == 4) {
#line 351
                                                                          blastFlag = 5;
                                                                        }
#line 355
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 360
                                                                        if (s__s3__tmp__cert_req) {
#line 361
                                                                          s__state = 4464;
                                                                        } else {
#line 363
                                                                          s__state = 4480;
                                                                        }
#line 365
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4464: ;
                                                                        switch_1_4465: ;
                                                                        switch_1_4466: ;
                                                                        switch_1_4467: 
#line 371
                                                                        ret = __VERIFIER_nondet_int();
#line 372
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 377
                                                                        s__state = 4480;
#line 378
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4480: ;
                                                                        switch_1_4481: 
#line 382
                                                                        ret = __VERIFIER_nondet_int();
#line 383
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 388
                                                                        l = (unsigned long )s__s3__tmp__new_cipher__algorithms;
#line 389
                                                                        if (s__s3__tmp__cert_req == 1) {
#line 390
                                                                          s__state = 4496;
                                                                        } else {
#line 392
                                                                          s__state = 4512;
#line 393
                                                                          s__s3__change_cipher_spec = 0;
                                                                        }
#line 395
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4496: ;
                                                                        switch_1_4497: 
#line 399
                                                                        ret = __VERIFIER_nondet_int();
#line 400
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 405
                                                                        s__state = 4512;
#line 406
                                                                        s__init_num = 0;
#line 407
                                                                        s__s3__change_cipher_spec = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4512: ;
                                                                        switch_1_4513: 
#line 411
                                                                        ret = __VERIFIER_nondet_int();
#line 412
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 417
                                                                        s__state = 4528;
#line 418
                                                                        s__init_num = 0;
#line 419
                                                                        s__session__cipher = s__s3__tmp__new_cipher;
#line 420
                                                                        if (s__s3__tmp__new_compression == 0) {
#line 421
                                                                          s__session__compress_meth = 0;
                                                                        } else {
#line 423
                                                                          s__session__compress_meth = s__s3__tmp__new_compression__id;
                                                                        }
#line 425
                                                                        if (! tmp___7) {
#line 426
                                                                          ret = -1;
                                                                          goto end;
                                                                        }
#line 431
                                                                        if (! tmp___8) {
#line 432
                                                                          ret = -1;
                                                                          goto end;
                                                                        }
                                                                        goto switch_1_break;
                                                                        switch_1_4528: ;
                                                                        switch_1_4529: 
#line 440
                                                                        ret = __VERIFIER_nondet_int();
#line 441
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 446
                                                                        s__state = 4352;
#line 447
                                                                        __cil_tmp56 = (long )s__s3__flags;
#line 447
                                                                        __cil_tmp57 = __cil_tmp56 + 5;
#line 447
                                                                        s__s3__flags = (int )__cil_tmp57;
#line 448
                                                                        if (s__hit) {
#line 449
                                                                          s__s3__tmp__next_state___0 = 3;
                                                                          {
#line 450
                                                                          __cil_tmp58 = (long )s__s3__flags;
#line 450
                                                                          if (__cil_tmp58 - 2L) {
#line 451
                                                                            s__state = 3;
#line 452
                                                                            __cil_tmp59 = (long )s__s3__flags;
#line 452
                                                                            __cil_tmp60 = __cil_tmp59 + 4L;
#line 452
                                                                            s__s3__flags = (int )__cil_tmp60;
#line 453
                                                                            s__s3__delay_buf_pop_ret = 0;
                                                                          }
                                                                          }
                                                                        } else {
#line 458
                                                                          s__s3__tmp__next_state___0 = 4560;
                                                                        }
#line 460
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4560: ;
                                                                        switch_1_4561: 
#line 464
                                                                        ret = __VERIFIER_nondet_int();
#line 465
                                                                        if (ret <= 0) {
                                                                          goto end;
                                                                        }
#line 470
                                                                        if (s__hit) {
#line 471
                                                                          s__state = 4512;
                                                                        } else {
#line 473
                                                                          s__state = 3;
                                                                        }
#line 475
                                                                        s__init_num = 0;
                                                                        goto switch_1_break;
                                                                        switch_1_4352: 
                                                                        {
#line 478
                                                                        __cil_tmp61 = (long )num1;
#line 478
                                                                        if (__cil_tmp61 > 0L) {
#line 479
                                                                          s__rwstate = 2;
#line 480
                                                                          num1 = tmp___9;
                                                                          {
#line 481
                                                                          __cil_tmp62 = (long )num1;
#line 481
                                                                          if (__cil_tmp62 <= 0L) {
#line 482
                                                                            ret = -1;
                                                                            goto end;
                                                                          }
                                                                          }
#line 487
                                                                          s__rwstate = 1;
                                                                        }
                                                                        }
#line 491
                                                                        s__state = s__s3__tmp__next_state___0;
                                                                        goto switch_1_break;
                                                                        switch_1_3: 
#line 494
                                                                        if (s__init_buf___0 != 0) {
#line 495
                                                                          s__init_buf___0 = 0;
                                                                        }
                                                                        {
#line 499
                                                                        __cil_tmp63 = (long )s__s3__flags;
#line 499
                                                                        __cil_tmp64 = __cil_tmp63 - 4L;
#line 499
                                                                        if (! __cil_tmp64) {

                                                                        }
                                                                        }
#line 504
                                                                        s__init_num = 0;
#line 505
                                                                        s__new_session = 0;
#line 506
                                                                        if (s__hit) {
#line 507
                                                                          s__ctx__stats__sess_hit ++;
                                                                        }
#line 511
                                                                        ret = 1;
#line 512
                                                                        s__ctx__stats__sess_connect_good ++;
#line 513
                                                                        if (cb != 0) {

                                                                        }
                                                                        goto end;
                                                                        switch_1_default: 
#line 520
                                                                        ret = -1;
                                                                        goto end;
                                                                      } else {
                                                                        switch_1_break: ;
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
#line 559
    if (! s__s3__tmp__reuse_message) {
#line 560
      if (! skip) {
#line 561
        if (s__debug) {
#line 562
          ret = __VERIFIER_nondet_int();
#line 563
          if (ret <= 0) {
            goto end;
          }
        }
#line 571
        if (cb != 0) {
#line 572
          if (s__state != state) {
#line 573
            new_state = s__state;
#line 574
            s__state = state;
#line 575
            s__state = new_state;
          }
        }
      }
    }
#line 588
    skip = 0;
  }
  while_0_break: /* CIL Label */ ;
  }

  end: 
#line 593
  s__in_handshake --;
#line 594
  if (cb != 0) {

  }
#line 599
  return (ret);
  ERROR:assert(0); 
#line 601
  return (-1);
}
}
#line 604 "s3_clnt_1.cil.c"
int main(void) 
{ int s ;

  {
  {
#line 609
  s = 12292;
#line 610
  ssl3_connect(12292);
  }
#line 612
  return (0);
}
}
