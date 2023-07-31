#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node of the list
 * Return: the address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;

    if (head == NULL)
        return (NULL);

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

