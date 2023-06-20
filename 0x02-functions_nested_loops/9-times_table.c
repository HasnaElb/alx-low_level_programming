#include "main.h"
/**
 * times_table - print the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar ("9 x %d = %d\n", i, 9 * i);
	}
	return (0);
}
