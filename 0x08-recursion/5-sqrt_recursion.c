#include "main.h"
/**
 * power_operation - function that returns the natural quare root of a number
 * @n: input number
 * @c: iterator
 * Return: quare root or -1
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural squre root of a number
 * @n: input number
 * Return: natural squre root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
