#include "main.h"
/**
 * _strcmp - function that compares rwo strings
 * @s1: the first string
 * @s2: the second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, result;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	result = s1[i] - s2[i];
	return (result);
}
