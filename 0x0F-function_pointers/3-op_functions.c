#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of a and b
 * @a: int
 * @b: int
 * Description: sum
 * Rerurn: the result to sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - resta
 * @a: int
 * @b: int
 * Description: resta
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multi
 * @a: int
 * @b: int
 * Description: multi
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: int
 * @b: int
 * Description: div
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod
 * @a: int
 * @b: int
 * Description: mod
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
