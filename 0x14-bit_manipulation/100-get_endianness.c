#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    union {
        int i;
        char c[sizeof(int)];
    } u;

    u.i = 1;

    if (u.c[0] == 1)
        return 1; // Little endian
    else
        return 0; // Big endian
}
