#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * isPalRec - checks if a string is a palindrome
 * @s: string to check
 * @str: string
 * @e: int
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int isPalRec(char str[], int s, int e)
{
	if (s == e)
	{
		return (1);
	}
	else if (str[s] != str[e])
	{
		return (0);
	}
	else if (s < e + 1)
	{
		return (isPalRec(str, s + 1, e - 1));
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}
