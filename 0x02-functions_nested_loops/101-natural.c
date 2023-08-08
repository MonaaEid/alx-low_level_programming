#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: a program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int k, sum;

	sum = 0;

	for (k = 0; k < 1024; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
			sum += k;
	}
	printf("%d\n", sum);
	return (0);
}
