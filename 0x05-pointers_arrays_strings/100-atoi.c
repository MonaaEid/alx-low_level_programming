#include "main.h"
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string that will be converted to intger
 * Return: f_res * (sign)
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int f_res = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		f_res = f_res * 10 + s[i] - '0';
<<<<<<< HEAD
=======
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			f_res = f_res * 10 + s[i] - '0';
		else if (f_res > 0)
			break;
		i++;
>>>>>>> 64f482dc106235b056b40f0b9def646b3b0e0c4e
	}
	return (sign * f_res);
}
