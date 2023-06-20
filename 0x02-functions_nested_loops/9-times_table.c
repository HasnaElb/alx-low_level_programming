#include "main.h"
/**
 * times_table - print the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	int j = 9 * i;

	if (j >= 10)
	{
		_putchar (j / 10 + '0');
		_putchar (j % 10 + '0');
	}
	else
	{
		_putchar (j + '0');
	}
	_putchar ('\n');
}
