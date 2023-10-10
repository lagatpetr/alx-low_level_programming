#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - searches for a value in a sorted singly linked list
 *             using the Jump search algorithm
 * @list: pointer to the head of the linked list
 * @size: number of nodes in the linked list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *         or NULL if value is not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev_index;
    listint_t *current;

    if (!list || size == 0)
        return (NULL);

    step = sqrt(size);
    current = list;
    prev_index = 0;

    while (current->index < size && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        prev_index = current->index;
        for (size_t i = 0; i < step && current->next; i++)
            current = current->next;

        if (!current->next)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev_index, current->index);

    for (listint_t *runner = list; runner && runner->index <= current->index; runner = runner->next)
    {
        printf("Value checked at index [%lu] = [%d]\n", runner->index, runner->n);
        if (runner->n == value)
            return (runner);
    }

    return (NULL);
}
