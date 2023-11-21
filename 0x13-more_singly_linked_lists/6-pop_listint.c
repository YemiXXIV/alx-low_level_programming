#include "lists.h"

/**
 * pop_listint - A function that deletes the head node and
 * returns the head node's data (n)
 * @head: - pointer to the pointer to the head of the node
 *
 * Return: If linked list is empty, return 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current_node;
	listint_t *previous_node = *head;

	if (*head == NULL)
		return (0);

	n = previous_node->n;
	current_node = previous_node->next;
	*head = current_node;
	free(previous_node);

	return (n);
}
