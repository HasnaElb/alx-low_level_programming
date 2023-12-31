#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: input string to search in
 * @c: input character to locate into string s
 * Return: pointer to c position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
