#include "lists.h"
#include <stdio.h>
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (unsigned int i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	dlistint_t *next = temp->next->next;
	free(temp->next);
	temp->next = next;

	if (next != NULL)
		next->prev = temp;

	return (1);
}

