#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to a pointer to the head of
 * the doubly linked list.
 * @index: The index of the node that should be
 * deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	i = 0;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	temp = current->prev;
	if (current->next != NULL)
		current->next->prev = temp;

	temp->next = current->next;
	free(current);

	return (1);
}
