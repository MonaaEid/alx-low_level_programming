#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

