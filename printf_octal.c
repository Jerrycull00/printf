#include "main.h"

/**
 *_print_octal - convert decimal to octal and print
 *@oct: va_list argument containing the decimal number
 *Return: number of characters printed
 **/
int _printf_octal(va_list oct)
{
	unsigned int decimalNumber = va_arg(oct, unsigned int);
	unsigned int num = decimalNumber;
	int count = 0;
	char octalNumber[32];
	int i = 0, j;
	int remainder;

	if (decimalNumber == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (num > 0)
	{
		remainder = num % 8;
		octalNumber[i] = '0' + remainder;
		num = num / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octalNumber[j]);
		count++;
	}
	return (count);
}
