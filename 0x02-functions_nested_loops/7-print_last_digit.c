#include "main.h"
/**
 * print_last_digit -  print the last digit of a number
 * @c: the digit to be print
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = (-1 * (c % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (c % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
