#include "main.h"

/**
 * print_square -a function that prints a square, followed by a new line.
 * @size: is the size of the square
 * Return: Use the character # to print the square
 */

void print_square(int size)
{
	int i;
	int square = 0;

	if (size > 0)
	{
		while (square <= size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
			square++;
		}
	}
		_putchar('\n');
}
