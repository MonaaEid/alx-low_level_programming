#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", current->str);

		current = current->next;
		count++;
	}
	return (count);
}
