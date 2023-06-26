#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: an input string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length;
	int temp;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
