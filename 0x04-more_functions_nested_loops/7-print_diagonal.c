#include "main.h"

/**
 * print_diagonal -Write a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: / character
 */

void print_diagonal(int n)
{
	int i;
	int diagonal = 0;

	while (diagonal < n)
	{
		for (i = 0; i < diagonal; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		diagonal++;
	}
	_putchar('\n');
}
