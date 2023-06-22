#include "main.h"

/**
 * more_numbers - a function that print nu,mbers from 0 to 14 ten times
 *
 * Return: numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
			_putchar(num / 10 + '0');
			}
		_putchar(num % 10 + '0');
		}
	_putchar('\n');
	}
}
