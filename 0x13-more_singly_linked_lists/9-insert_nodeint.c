#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position
 * @head: Pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added
 *
 * Return: Pointer to list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous, *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	previous = *head;

	if (idx == 0)
	{
		current->next = previous;
		*head = current;
		return (current);
	}

	for (count = 0; count < idx - 1; count++)
	{
		if (previous == NULL)
			return (NULL);
		previous = previous->next;
	}

	current->next = previous->next;
	previous->next = current;

	return (current);
}
