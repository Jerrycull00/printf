#include "main.h"
/**
 *_printf_hexa - function that prints an unsigned int in hexadecimal
 *@n: unsigned to be printed
 *@c: case of printing (0 = lower, 1 = upper)
 * Return: size of output
 **/
int _printf_hexa(unsigned int n, unsigned int c)
{
	unsigned int len, powten, j, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * powten;
			powten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
 * _printf_hex - takes an unsigned int.
 *@x: unsigned int to print
 *Descriptions: prints in lowercase hex with _putchar
 *Return: size of the output
 **/
int _printf_hex(va_list x)
{
	return (_printf_hexa(va_arg(x, unsigned int), 0));
}
/**
 * _printf_HEX - takes an unsigned int an prints it in uppercase hex
 *@X: unsigned int to print
 *Descriptions: prints in uppercase hex with _putchar
 *Return: size of the output
 **/
int _printf_HEX(va_list X)
{
	return (_printf_hexa(va_arg(X, unsigned int), 1));
}
