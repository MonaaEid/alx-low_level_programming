#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: the array
 * @size: size of the given array
 * @value: the given number we search for
 * Return: i
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
