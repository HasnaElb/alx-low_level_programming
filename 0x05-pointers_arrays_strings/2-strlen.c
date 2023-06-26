#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
