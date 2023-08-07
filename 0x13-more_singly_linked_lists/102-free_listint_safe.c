#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to the first node of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{

	size_t count = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (count);
	while (*h)
	{
		count++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (count);
}
