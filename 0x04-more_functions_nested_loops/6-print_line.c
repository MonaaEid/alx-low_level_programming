#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 *
 * Return: 1 or 0
 */
void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
