#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: Number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->node;
	}

	return (node_count);
}
