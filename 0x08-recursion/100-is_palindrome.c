#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: palindrome
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s), i = 0;

	if (len == 0)
		return (1);
	return (palindrome_check(s, len - 1, i));
}
