#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: character to be printed
 * Return: @ on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
