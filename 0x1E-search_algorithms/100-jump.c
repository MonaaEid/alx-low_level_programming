#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: the array
 * @size: size of the given array
 * @value: the given number we search for
 * Return: i
 */
int jump_search(int *array, size_t size, int value);
{
	int len = size;
	int step = sqrt(size);
	int prev = 0;

	if (array ==  NULL)
		return (-1);
	while (array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(len);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
