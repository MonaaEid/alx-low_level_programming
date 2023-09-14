#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}

