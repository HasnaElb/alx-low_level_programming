#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: on success, 0, on error, 1
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
