#include <stdio.h>
/**
 * main - Print the sum of even Fibonacci numbers up to a fib value
 * Return: Always 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
