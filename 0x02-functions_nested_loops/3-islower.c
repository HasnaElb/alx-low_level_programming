#include "main.h"
/**
 * _islower - Entry point
 * @c: contain a value to be compared
 * Return: on success, 1 otherwise 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

