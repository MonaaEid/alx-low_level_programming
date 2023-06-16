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
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	i++;
	}
	putchar('\n');
	return (0);
}
