#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int numleft;
	int numlast;

	for (numleft = 0; numleft < 100; numleft++)
	{
		for (numlast = 0; numlast < 100; numlast++)
		{
			if (numleft < numlast)
			{
			putchar(numleft / 10 + 48);
			putchar(numleft % 10 + 48);
			putchar(32);
			putchar(numlast / 10 + 48);
			putchar(numlast % 10 + 48);
			if (numleft < 98)
			{
				putchar(44);
				putchar(32);
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
