#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: array element
 * @n: number of array element
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int k;

	while (k < n)
	{
		printf("%d", a[k]);
		if (i != n - 1)
		{
			printf(", ");
		}
		k++;
	}
	printf("\n");
}
