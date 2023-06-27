#include "main.h"
/**
 *_printf - is a function that selects the correct function to print.
 *@format: identifier to look for.
 *Return: the length of the string.
 **/
int _printf(const char * const format, ...)
{
	print_t m[] = {
		{"%s", _printf_string}, {"%c", _printf_char},
		{"%%", _printf_37},
		{"%i", _printf_int}, {"%d", _printf_dec}, {"%r", _printf_srev},
		{"%R", _printf_rot13}, {"%b", _printf_bin}, {"%u", _printf_unsigned},
		{"%o", _printf_oct}, {"%x", _printf_hex}, {"%X", _printf_HEX},
		{"%S", _printf_exclusive_string}, {"%p", _printf_pointer}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].ident[0] == format[i] && m[j].ident[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				break;
			}
			j--;
		}
		if (j == -1)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
