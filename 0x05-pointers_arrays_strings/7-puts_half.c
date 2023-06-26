#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * in reverse, followed by a new line
 * @str: is the String
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2 + 1;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
