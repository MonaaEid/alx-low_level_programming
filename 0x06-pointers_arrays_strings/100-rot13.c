/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *res = s;

	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (res);
}
