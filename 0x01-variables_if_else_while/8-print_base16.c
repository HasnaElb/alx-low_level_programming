#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int num;
	char abc;

	for (num = 0; num <= 9; num++)
	{
	putchar(48 + num);
	}
	for (abc = 'a'; abc <= 'f'; abc++)
	{
	putchar(abc);
	}
	putchar('\n');
	return (0);
}

