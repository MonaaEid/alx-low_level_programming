#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - function that deletes the 
 * node at index index of a dlistint_t linked list.
 * @head: kj
 * @index: i
 * Return: -1 or 1*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;
	dlistint_t *next;

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

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	if (next != NULL)
		next->prev = temp;

	return (1);
}

