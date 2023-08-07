#include "main.h"
/**
 * set_bit- function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: value of bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
