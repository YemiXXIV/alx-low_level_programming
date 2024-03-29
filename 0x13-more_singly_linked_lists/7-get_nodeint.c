#include "lists.h"

/**
 * get_nodeint_at_index - A function that gets the nth node of a linked list
 * @head: Pointer to the node starting at 0
 * @index: The nth node to get
 *
 * Return: return the nth node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head, *n;
	unsigned int c;

	if (head == NULL)
		return (NULL);

	for (c = 0; c < index; c++)
	{
		if (current->next == NULL)
			return (NULL);
		n = current->next;
		current = n;
	}
	return (current);
}
