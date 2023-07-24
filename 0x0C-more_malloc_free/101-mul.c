#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: void
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	const char *num1 = argv[1];
	const char *num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		printf("Error\n");
		return (98);
	}
	int result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
