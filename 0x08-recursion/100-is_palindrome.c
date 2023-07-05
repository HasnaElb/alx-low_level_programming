#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if the string is palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome_check(s, 0, _strlen_recursion(s) - 1));
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
	return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compare each character of string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: int
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 +1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
