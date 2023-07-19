#include <stdio.h>

void print_opcodes(char *start, char *end)
{
	char *ptr;

	for (ptr = start; ptr < end; ptr++)
	{
		printf("%02x", *ptr & 0xff);
	}
  printf("\n");
}
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "%s\n", argv[0]);
		return 1;
	}

  int n = atoi(argv[1]);
  char *start = (char *)main;
  char *end = start + n;

  print_opcodes(start, end);

  return 0;
}
