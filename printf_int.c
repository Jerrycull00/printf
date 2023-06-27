#include "main.h"
/**
 *printf_int - prints integer
 *@args: argument to print
 *Return: number of characters printed
 **/
int printf_int(va_list args)
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
		putchar('0' + (temp % 10));
		temp /= 10;
		revDigits++;
	}
	return (revDigits);
}
