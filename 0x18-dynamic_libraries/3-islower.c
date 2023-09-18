#include "main.h"
/**
 * _islower - Entry point
 *
 * Description:  a function that checks for lowercase character.
 * @c: The character to compare
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
