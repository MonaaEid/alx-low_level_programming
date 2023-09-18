#include "main.h"

/**
 * _isdigit - a function that checks for digit number from ZERO to nine
 * @c: third integer
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
