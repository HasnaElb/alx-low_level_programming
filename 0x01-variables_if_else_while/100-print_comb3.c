#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int numI;
	int numJ;
	int minI = 48;

	for (numI = 48; numI <= 57; numI++)
	{
		for (numJ = minI++; numJ <= 57; numJ++)
		{
		if (numJ != numI)
		{
		putchar(numI);
		putchar(numJ);
		if (!(numJ == 57 && numI == 56))
		{
		putchar(',');
		putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
