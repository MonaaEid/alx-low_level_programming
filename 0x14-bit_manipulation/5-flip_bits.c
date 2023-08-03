#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: 
 * @m: 
 * Return: 
 */
int countSetBits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = n ^ m;

	return countSetBits(x);
}
