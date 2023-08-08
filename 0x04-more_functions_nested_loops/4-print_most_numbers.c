#include "main.h"

/**
 * print_most_numbers - a function that print nu,mbers from 0 to 9
 * except 2and 4
 *
 * Return: 1 or 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
