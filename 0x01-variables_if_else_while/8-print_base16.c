#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the program that output Hexadecimal
 * all the numbers of base sixtheen  in lowercasenew line
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	i = 0;
	while (i < 6)
	{
		putchar(i + 'a');
		i++;
	}
	putchar('\n');
	return (0);
}
