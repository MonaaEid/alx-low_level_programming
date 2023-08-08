#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the program that output alphabet and print
 * new line
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
