#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: a function that checks for lowercase character.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int n, i, sum;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			sum = i * n;
			_putchar(sum + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
