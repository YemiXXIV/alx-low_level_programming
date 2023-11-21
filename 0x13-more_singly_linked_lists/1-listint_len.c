#include "lists.h"

/**
 * listint_len - A function that prints number of elements in a linked list.
 *@h: Pointer to head of the list
 *
 * Return: The number of elemnetd in the list
 */

size_t listint_len(const listint_t *h)
{
	int l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}

	return (l);
}
