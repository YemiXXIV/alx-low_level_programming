#include "lists.h"

/**
 * sum_listint - A function that sums all the
 * data(n) 0f a linked list
 * @head: Pointer to the first node of the list
 *
 * Return: 0 if list is empty and the sum if otherwise
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
