#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t count, i;

	current = head;
	count = 0;

	while (current != NULL)
	{
		runner = head;
		for (i = 0; i < count; i++)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}

			runner = runner->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}

	return (count);
}
