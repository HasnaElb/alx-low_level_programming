 #include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string
 */
char *strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ == *src++;
	*dest = '\0';
	return (temp);
}
