#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int numI;
	int numJ;
	int numK;

	for (numI = 48; numI <= 57; numI++)
	{
	for (numJ = numI + 1; numJ <= 57; numJ++)
	{
	for (numK = numJ + 1; numK <= 57; numK++)
	{
		if (numJ != numK)
		{
			putchar(numI);
			putchar(numJ);
			putchar(numK);
		if (!(numK == 57 && numJ == 56 && numI == 55))
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
