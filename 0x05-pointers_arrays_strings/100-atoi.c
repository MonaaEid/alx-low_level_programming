#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string that will be converted to intger
 * Return: f_res * (sign)
 */
int _atoi(char *s)
{
	int sign = 1;
	int base = 0;
	int i = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
	if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	base = 10 * base + (str[i++] - '0');
	}
	return (base * sign);
}
