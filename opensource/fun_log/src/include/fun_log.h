#ifndef __FUN_LOG_H__
#define __FUN_LOG_H__


#include<stdarg.h>
#include<stdio.h>
#include"fun_log_typedef.h"


int fun_log_set_level(FunLogLevel_t level);
int fun_log_debug(char *format, ...);
int fun_log_error(char *format, ...);



#endif
