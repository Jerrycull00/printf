#include "main.h"
/**
 *_printf_dec - prints decima
 *@args: argument to print
 *Return: number of characters printed
 **/

int _printf_dec(va_list args)
{
	int num = va_arg(args, int);
	int reversed = 0, digit, revDigits, temp;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	reversed = 0;
	while (num > 0)
	{
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}
	revDigits = 0;
	temp = reversed;
	while (temp > 0)
	{
		_putchar('0' + (temp % 10));
		temp /= 10;
		revDigits++;
	}
	return (revDigits);
}
