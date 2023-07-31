#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: the beggining of  list
 *
 * Return: the new nodes
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->n);
		free(current);
		current = next;
	}
}
