#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: A pointer to the pointer to the head of the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *present_node;
	listint_t *new_node;

	if (head == NULL)
		return;

	present_node = *head;

	while (present_node != NULL)
	{
		new_node = present_node->next;

		free(present_node);

		present_node = new_node;
	}

	*head = NULL;
}
