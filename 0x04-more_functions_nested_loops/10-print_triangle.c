#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: is the size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i < (size + 1); i++)
	{


		for (j = 0; j < (size - i); j++)
		{
			_putchar(' ');
		}


		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
