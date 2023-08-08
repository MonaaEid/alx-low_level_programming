#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c, sum;

	sum = 2;
	for (i = 2; i < 33; i++)
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
