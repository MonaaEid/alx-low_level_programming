#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 98;
	int fib[n];
	int i;

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
