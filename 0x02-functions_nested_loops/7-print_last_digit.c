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
	lastDigit = lastDigit % 10;
	if (lastDigit < 0)

		lastDigit = -lastDigit;
	_putchar (lastDigit + '0');
	return (lastDigit);

}
