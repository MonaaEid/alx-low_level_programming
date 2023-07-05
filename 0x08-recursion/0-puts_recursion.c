#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		return;
	}
	_puts_recursion(s);
}
