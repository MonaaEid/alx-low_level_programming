#include "search_algos.h"
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
	size_t m = (size / 2) ;

	if (array == NULL && size == 0)
		return (-1);
	if (array[m] == value)
		return (m);
	if (value < array[m])
		return (binary_search(array, m, value));
	if (value > array[m])
		return(binary_search(array + m + 1, size - m - 1, value));
	else
		return (-1);
	return -1;
}
