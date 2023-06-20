#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry point
 * @c: the int to print
 * Return: Always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		return (c);
	}
}
