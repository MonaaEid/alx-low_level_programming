#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: i (length of string)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	return (i);
	}
	i = i + 1;
	_strlen_recursion(s);
}
