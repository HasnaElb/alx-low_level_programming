#include "main.h"
/**
 * _memcpy - function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory source to copy from
 * @n: number of bytes
 * Return: pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
