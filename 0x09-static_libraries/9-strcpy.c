#include "main.h"
/**
 * _strcpy - function that copies the string ponited to by src
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
