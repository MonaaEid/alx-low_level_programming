#include "main.h"

/**
 * print_diagonal -Write a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: / character
 */

void print_diagonal(int n)
{
	int diagonal = 0;

	while (diagonal < n)
	{
		for (diagonal = 0; digonal < n; diagonal++)
		{
			_putchar(' ');
		}
		_putchar('/');
		line++;
	}
	_putchar('\n');
}
