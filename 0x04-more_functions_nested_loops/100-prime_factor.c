#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	long m = 612852475143;
	long i;

	for (i = 2; i <= m; i++)
	{
		while (m % i == 0)
		{
			m /= i;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}

