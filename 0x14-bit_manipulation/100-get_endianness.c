#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/**
	 * A union that can store an int or a char array
	 * @union my_union
	 * @members
	 *  int i: the int member
	 *  char c[sizeof(int)]: the char array member
	 * @var u
	 * The union variable
	 */
	union my_union
	{
		int i;
		char c[sizeof(int)];
	} u;

	u.i = 1;

	if (u.c[0] == 1)
		return (1);
	else
		return (0);
}
