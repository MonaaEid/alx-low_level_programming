#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: (length of string)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	*(s + len - 1) = '\0';
	return (is_palindrome(s + 1));
}
