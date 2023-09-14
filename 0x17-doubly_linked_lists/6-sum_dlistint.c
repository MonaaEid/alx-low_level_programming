#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: head of linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

