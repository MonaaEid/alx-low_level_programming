#include "search_algos.h"
/**
 * binary_search_recursive - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: the array
 * @low: size of the given array
 * @high: size of the given array
 * @value: the given number we search for
 * Return: i
 */

int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t m, i;

	if (low <= high)
	{
		m = low + (high - low) / 2;

		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i < high)
				printf(",");
		}
		printf("\n");

		if (array[m] == value)
			return (m);

		else if (array[m] < value)
			return (binary_search_recursive(array, m + 1, high, value));

		else
			return (binary_search_recursive(array, low, m - 1, value));
	}
	return (-1);
}
/**
 * binary_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: the array
 * @size: size of the given array
 * @value: the given number we search for
 * Return: i
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
