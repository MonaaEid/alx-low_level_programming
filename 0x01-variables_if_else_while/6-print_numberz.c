#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print All single digits and just using putchar
 * and not using char type
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
