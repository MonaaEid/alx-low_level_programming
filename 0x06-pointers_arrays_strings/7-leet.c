/**
 * leet - a function that encodes a string into 1337.
 * @str: is the String
 * Return: modified string
 */
char *leet(char *str)
{
	char *p = str;
	char c;

	while (*p)
	{
		c = *p;
		if (c == 'a' || c == 'A')
		{
			*p = '4';
		}
		if (c == 'e' || c == 'E')
		{
			*p = '3';
		}
		if (c == 'o' || c == 'O')
		{
			*p = '0';
		}
		if (c == 't' || c == 'T')
		{
			*p = '7';
		}
		if (c == 'l' || c == 'L')
		{
			*p = '1';
		}
		p++;
	}
	return (str);
}
