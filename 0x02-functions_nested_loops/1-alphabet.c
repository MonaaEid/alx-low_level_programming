#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: print the alphabet, in lowercase, followed by
 * a new line using print_alphabet
 *
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
