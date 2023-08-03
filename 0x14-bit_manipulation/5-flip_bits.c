#include "main.h"
/**
 * countSetBits - function to count set bits in an integer
 * @n: bits
 * Return: count of set bits
 */
int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = n ^ m;

	return (countSetBits(x));
}
