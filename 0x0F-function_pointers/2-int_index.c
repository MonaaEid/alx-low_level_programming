#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array elements
 * @size: is the size of the array
 * @cmp: is a pointer to the function you need to use
 * Return: -1 if no element matches or returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
/**
 * cmp - function that searches for an integer
 * @n: the intgers
 * Return: 0 or 1
 */
int cmp(int n)
{
	return (n == 5);
}
