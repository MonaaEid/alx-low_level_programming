#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: a function that checks for lowercase character.
 * @lastDigit: The character to compare
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int lastDigit)
{
	if (lastDigit < 0)
	{
		lastDigit = (-1) * lastDigit % 10;
		return (lastDigit);
	}
	else
	{
		lastDigit = lastDigit % 10;
		return (lastDigit);
	}

}
