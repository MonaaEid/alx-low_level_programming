#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the program that output all possible
 * combinations of single-digit numbers and print
 *
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i = 0;
	int k;

	while (i < 10)
	{
		k = i + 1;
		while (k < 10)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(k + '0');
		k++;
		}
	i++;
	}
	return (0);
}
