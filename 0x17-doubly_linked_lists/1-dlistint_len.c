#include "lists.h"

/**
 * dlistint_len - Lists the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	return (i);
}

