#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: the string that will be copied
 * @dest: the parameter that hold the copied string
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] <= '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
