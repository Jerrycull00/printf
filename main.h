#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
 *struct format - match the conversion specifiers for printf
 *@ident: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 *@f: type pointer to function for the conversion specifie
 **/
typedef struct format
{
	char *ident;
	int (*f)()
} print_t;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
