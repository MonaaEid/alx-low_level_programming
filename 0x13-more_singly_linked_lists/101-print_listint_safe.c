#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast, *loop;

if (head == NULL)
    exit(98);

slow = head;
fast = head->next;
while (fast != NULL && fast->next != NULL)
{
    if (slow == fast)
    {
        loop = find_loop(head, slow);
        break;
    }
    slow = slow->next;
    fast = fast->next->next;
}

if (loop == NULL)
    return (print_list(head));

count = print_list_until(head, loop);
printf("-> [%p] %d\n", (void *)loop, loop->n);
return (count + 1);
}

/**
 * find_loop - finds the node where the loop starts
 * @head: pointer to the first node of the list
 * @meet: pointer to the node where slow and fast pointers meet
 * Return: pointer to the node where the loop starts
 */
const listint_t *find_loop(const listint_t *head, const listint_t *meet)
{
const listint_t *start, *end;

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
 * print_list - prints a list without a loop
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const listint_t *head)
{
size_t count = 0;

while (head != NULL)
{
    printf("[%p] %d\n", (void *)head, head->n);
    count++;
    head = head->next;
}
return (count);
}

/**
 * print_list_until - prints a list until a given node
 * @head: pointer to the first node of the list
 * @stop: pointer to the node where to stop printing
 * Return: the number of nodes printed
 */
size_t print_list_until(const listint_t *head, const listint_t *stop)
{
size_t count = 0;

while (head != stop)
{
    printf("[%p] %d\n", (void *)head, head->n);
    count++;
    head = head->next;
}
return (count);
}

