#include "main.h"
#include <stdio.h>
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
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome_check - returns 1 if palindrome and 0 if not
 * @s: string
 * @len: length of string
 * @i: counter variable
 * Return: int
 */
int palindrome_check(char *s, int len, int i)
{
	if (len == i)
		return (1);
	else if (s[len] != s[i])
		return (0);
	if (i < len)
		return (palindrome_check(s, --len, i++));
	return (1);
}
