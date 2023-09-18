#include "main.h"
/**
 * _puts - Write a function that prints a string, followed by
 * a new line, to stdout.
 * @str: is the String
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
