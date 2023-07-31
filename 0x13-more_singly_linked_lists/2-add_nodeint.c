#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * the beginning of a list_t list.
 * @head: the beggining of  list
 * @n: intger
 * Return: the new nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
