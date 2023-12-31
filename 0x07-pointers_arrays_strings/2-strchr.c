#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be located
 * @c: the character
 * Return: the pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
