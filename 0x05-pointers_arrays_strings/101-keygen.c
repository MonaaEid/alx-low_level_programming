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
	int rand;
	int total;

	srand(time(NULL));
	total = 0;

	while (total < 2772 - 122)
	{
		rand = rand() % 127;
		if (rand == 0)
		{
			continue;
		}
		putchar(rand);
		total += rand;
	}
	putchar(2772 - total);
	return (0);
}
