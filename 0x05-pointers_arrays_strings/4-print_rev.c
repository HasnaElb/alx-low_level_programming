#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse, followed by new line
 * @s: an input string
 * Return: void
 */
void print_rev(char *s)
{
	int str_len;
	int i;

	str_len = strlen(s);

	for (i = (str_len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
