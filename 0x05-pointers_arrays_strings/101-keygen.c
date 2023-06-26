#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function that generates random valid passwords for the
 * program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	char keygen[84];
	int index = 0, sum = 0;
	int diff_half1, diff_half2;

	srand(time(0));
	while (sum < 2772)
	{
		keygen[index] = 33 + rand() % 94;
		sum += keygen[index++];
	}
	keygen[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		for (index = 0; keygen[index]; index++)
		{
			if (keygen[index] >= (33 + diff_half1))
			{
				keygen[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; keygen[index]; index++)
		{
			if (keygen[index] >= (33 + diff_half2))
			{
				keygen[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s", keygen);

	return (0);
}
