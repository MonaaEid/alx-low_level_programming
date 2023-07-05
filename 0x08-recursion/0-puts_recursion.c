#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string
 * Return: s
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		return;
		printf("%c\n", s);
		s++;
	}
	_puts_recursion(s);
}
