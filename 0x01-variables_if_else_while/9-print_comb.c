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

	while (i < 10)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
			purchar(i + '0');

	i++;
	}
	return (0);
}
