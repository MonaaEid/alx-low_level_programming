#include "main.h"
/**
 * print_triangle -a function that prints a square, followed by a new line.
 * @size: is the size of the triangle
 * Return: Use the character # to print the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int triangle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (triangle = 1; triangle <= i; triangle++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
