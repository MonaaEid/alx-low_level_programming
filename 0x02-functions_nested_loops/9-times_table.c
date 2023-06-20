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

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 0)
			{
				sum = i * n;
				_putchar('0');
				_putchar(' ');
				_putchar(' ');
			}
			else if (sum < 10)
			{
				_putchar(sum + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
