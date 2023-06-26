#include "main.h"
/**
 * swap_int -a function that swaps the values of two integers
 * @a: is the intger
 * @b: second parameter
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
