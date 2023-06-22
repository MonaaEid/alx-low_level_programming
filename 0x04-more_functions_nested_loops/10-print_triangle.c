#include "main.h"
/**
 * print_triangle -a function that prints a square, followed by a new line.
 * @size: is the size of the triangle
 * Return: Use the character # to print the triangle
 */

void print_triangle(int size)
{
	int i, triangle, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= size; i++)
		{
			for (space = 1; space <= size - i; space++)
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
