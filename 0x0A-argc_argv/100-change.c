#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: stores the number of command-line arguments
 * @argv: array of character pointers listing all the arguments.
 * Description:  a program that prints the minimum number
 * of coins to make change for an amount of money.
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{	printf("0\n");
		return (0);	}
	while (cents >= 25)
	{	cents -= 25;
		coins++;	}
	while (cents >= 10)
	{	cents -= 10;
		coins++;	}
	while (cents >= 5)
	{	cents -= 5;
		coins++;	}
	while (cents >= 2)
	{	cents -= 2;
		coins++;	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
