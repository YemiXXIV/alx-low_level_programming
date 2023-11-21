#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: Number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
