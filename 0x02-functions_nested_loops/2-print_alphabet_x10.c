#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char chrs;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (chrs = 'a'; chrs <= 'z'; chrs++)
		{
			_putchar(chrs);
		}
	_putchar('\n');
	}
}
