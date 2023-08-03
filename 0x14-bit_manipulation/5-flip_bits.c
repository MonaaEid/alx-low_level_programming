#include "main.h"
/**
 * countSetBits - function to count set bits in an integer
 * @n: bits
 * Return: count of set bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int x = n ^ m;
    unsigned int count = 0;

    while (x > 0)
    {
        count += x & 1;
        x >>= 1;
    }

    return (count);
}
