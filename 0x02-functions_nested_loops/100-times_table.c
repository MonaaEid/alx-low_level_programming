#include "main.h"
/**
 * print_times_table - Entry point
 *
 * Description: a function that prints the n times table,
 * starting with 0.
 * @n: tables will be excuted
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, k, multi;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				multi = i * k;
				if (k == 0)
				{
					_putchar('0');
				}
				else if (multi < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi + '0');
				}
				else if (multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi / 10 + '0');
					_putchar(multi % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar((multi / 10) % 10 + '0');
					_putchar((multi % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
