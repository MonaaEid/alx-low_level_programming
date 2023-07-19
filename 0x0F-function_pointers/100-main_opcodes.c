void print_opcodes(char *start, char *end)
{
	char *ptr;

	for (ptr = start; ptr < end; ptr++)
	{
		printf("%02x", *ptr & 0xff);
	}
  printf("\n");
}
