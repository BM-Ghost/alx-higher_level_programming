#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
    listint_t *slow_runner = list;
    listint_t *fast_runner = list;

    if (!list)
        return (0);

    while (slow_runner && fast_runner && fast_runner->next)
    {
        slow_runner = slow_runner->next;
        fast_runner = fast_runner->next->next;

        if (slow_runner == fast_runner)
            return (1);
    }

    return (0);
}

