#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: function that checks for alphabetic character C ,c
 * @c: The character to compare
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c == 'c' || c == 'C')
		return (1);
	else
		return (0);
}
