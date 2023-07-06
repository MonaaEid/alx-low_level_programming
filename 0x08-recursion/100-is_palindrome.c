#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
/*int is_palindrome(char *s)
 *{
 *
 * 	int len = strlen(s);
 *
 *   if (len <= 1)
 *       return (1);
 *   if (*s != *(s + len - 1))
 *       return (0);
 *   *(s + len - 1) = '\0';
 *   return (is_palindrome(s + 1));
 * }
 */
int isPalRec(char str[],int s, int e)
{
	if (s == e)
		return (1);
	
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));
}

int is_palindrome(char *s)
{
int n = strlen(s);

if (n == 0)
    return (1);

return isPalRec(s, 0, n - 1);
}
