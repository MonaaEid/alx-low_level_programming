#include "main.h"
#include <limits.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string that will be converted to intger
 * Return: f_res * (sign)
 */

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (res > INT_MAX / 10 || (res == INT_MAX / 10
						&& s[i] - '0' > INT_MAX % 10))
				return (INT_MAX);
			else if (res < INT_MIN / 10 || (res == INT_MIN / 10 &&
						s[i] - '0' > -(INT_MIN % 10)))
				return (INT_MIN);
			res = res * 10 + sign * (s[i] - '0');
		}
		if (s[i] == '+' || s[i] == '-')
			if (s[i + 1] < '0' || s[i + 1] > '9')
				return (0);
		i++;
	}
	return (res);
}
