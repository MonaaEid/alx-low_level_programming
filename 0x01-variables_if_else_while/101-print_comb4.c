#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the program that output all possible
 * combinations of single-digit numbers and print
 *
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i = 0;
	int k;
	int o;

	while (i < 10)
	{
		k = i + 1;
		while (k < 10)
		{
			o = k + 1;
			while (o < 10)
			{
			if (i != k || i < k || k < o)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(o + '0');

					if (i + k + o < 24)
					{
						putchar(',');
						putchar(' ');
					}
			}
			o++;
			}
		k++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
