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
int _printf_37(va_list args __attribute__((unused)));
int _strlenc(const char *s);
int _printf_bin(va_list bi);
int _printf_octal(va_list oct);
int _printf_hexa(unsigned int n, unsigned int c);
int _printf_hex(va_list x);
int _strlenc(const char *s);
int _printf_HEX(va_list X);
int _printf_string(va_list val);
int _printf_srev(va_list args);
int _printf_pointer(va_list val);
int _printf_hex_aux(unsigned long int num);
int _printf_rot13(va_list args);
int _printf_exclusive_string(va_list val);
int _printf_unsigned(va_list args);
int _printf_HEX_aux(unsigned int num);
#endif
