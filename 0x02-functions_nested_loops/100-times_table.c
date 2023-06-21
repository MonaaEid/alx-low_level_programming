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
	int i, k, sum;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				result = i * k;
				if (k == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
				}
			}
			printf("\n");
		}
	}
}
