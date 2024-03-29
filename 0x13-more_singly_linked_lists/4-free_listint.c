#include "lists.h"

/**
 * free_listint - A function that frees listint_t linked list
 * @head: Pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
