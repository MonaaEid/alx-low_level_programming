#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the program that output alphabet in reverse order
 * and print new line
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
