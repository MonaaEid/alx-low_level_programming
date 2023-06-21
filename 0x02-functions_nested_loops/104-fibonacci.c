#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 98;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;

	printf("%lu, %lu", a, b);
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
}
