#include "lists.h"
#include <stdio.h>
/**
 * before_main - a function that prints a certain sentece
 * before the main function is executed.
 *
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
