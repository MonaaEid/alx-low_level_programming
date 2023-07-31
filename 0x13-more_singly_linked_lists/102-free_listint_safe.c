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
    listint_t *current, *next, *loop;

    if (h == NULL || *h == NULL)
        return (0);

    loop = find_loop(*h);
    current = *h;
    while (current != loop)
    {
        next = current->next;
        free(current);
        count++;
        current = next;
    }

    if (loop != NULL)
    {
        free_loop(loop);
        count++;
    }

    *h = NULL;
    return (count);
}

/**
 * find_loop - finds the node where the loop starts
 * @head: pointer to the first node of the list
 * Return: pointer to the node where the loop starts, or NULL if no loop
 */
listint_t *find_loop(listint_t *head)
{
    listint_t *slow, *fast;

    slow = head;
    fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
            return (find_start(head, slow));
        slow = slow->next;
        fast = fast->next->next;
    }
    return (NULL);
}

/**
 * find_start - finds the node where the loop starts
 * @head: pointer to the first node of the list
 * @meet: pointer to the node where slow and fast pointers meet
 * Return: pointer to the node where the loop starts
 */
listint_t *find_start(listint_t *head, listint_t *meet)
{
    listint_t *start, *end;

    start = head;
    end = meet;
    while (start != end)
    {
        start = start->next;
        end = end->next;
    }
    return (start);
}

/**
 * free_loop - frees a list with a loop
 * @loop: pointer to the node where the loop starts
 */
void free_loop(listint_t *loop)
{
    listint_t *current, *next;

    current = loop->next;
    while (current != loop)
    {
        next = current->next;
        free(current);
        current = next;
    }
    free(loop);
}

