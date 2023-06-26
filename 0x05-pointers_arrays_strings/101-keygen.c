#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: a program that generates random valid
 * passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int random;
	int total;

	srand(time(NULL));
	total = 0;

	while (total < 2772 - 122)
	{
		random = rand() % 127;
		if (random == 0)
		{
			continue;
		}
		putchar(random);
		total += random;
	}
	putchar(2772 - total);
	return (0);
}
