#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: function that computes the absolute value of an integer.
 * @int: The character to compare
 *
 * Return: Always 0 (Success)
 */
int _abs(int)
{
	int r;

	if (r < 0)
	{
		_putchar(r * '-');
	}
	else
		_putchar(r);
	return (0);
}
