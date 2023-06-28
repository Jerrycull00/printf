#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void printString(const char* str) 
{
	const char* ptr = str;

	while (*ptr) 
	{
		if (*ptr >= 32 && *ptr < 127) 
		{
			putchar(*ptr);
		} 
		else 
		{
		printf("\\x%02X", (unsigned char)*ptr);
		}
		ptr++;
	}
}

int _printf(const char* format, ...) 
{
	int wr = 0;
	const char* ptr = format;

	va_list args;
	va_start(args, format);

	while (*ptr) 
	{
		if (*ptr == '%') 
		{
			ptr++;
			if (*ptr == 'S') 
			{
				const char* str = va_arg(args, const char*);
				printString(str);
				wr += strlen(str);
			} 
			else 
			{
				putchar(*ptr);
				wr++;
			}
		} 
		else 
		{
			putchar(*ptr);
			wr++;
		}
		ptr++;
	}

	va_end(args);
	return wr;
}
