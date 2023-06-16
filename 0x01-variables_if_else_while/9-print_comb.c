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
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	i++;
	}
	return (0);
}
