#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int m = 1, n = 2, c;

	printf("%ld, %ld", m, n);
	for (i = 2; i < 50; i++)
	{
		c = m + n;
		printf(", %ld", c);
		m = n;
		n = c;
	}
	printf("\n");
	return (0);
}

