#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: function that checks for alphabetic characters
 * @c: The character to compare
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
