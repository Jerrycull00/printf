#include "main.h"
/**
 * _printf_bin - convert decimal to binary and print
 * @bi: va_list argument containing the decimal number
 * Return: number of characters printed
 **/

int _printf_bin(va_list bi)
{
	unsigned int decimalNumber = va_arg(bi, unsigned int);
	unsigned int num = decimalNumber;
	int count = 0;
	char binaryNumber[32];
	int i = 0;
	int j;
	int remainder;

	if (decimalNumber == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		remainder = num % 2;
		binaryNumber[i] = '0' + remainder;
		num = num / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binaryNumber[j]);
		count++;
	}
	return (count);
}
