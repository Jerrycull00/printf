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
	int (*f)(va_list args);
} print_t;
int _printf(const char *format, ...);
int _putchar(char c);
int _printf_char(va_list val);
int _printf_int(va_list args);
int _printf_dec(va_list args);
int _strlen(char *s);
int _printf_37(void);
int _strlenc(const char *s);

#endif
