#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
		len++;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	len++;

	if (n > len)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
