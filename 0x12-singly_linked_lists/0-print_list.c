#include "lists.h"

/**
 * print_list - A function that prints all the elements of the list
 * @h: pointer to the head of the node
 *
 * Return: size of elemnts in the list
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] (nil)\n", c);
		else
			printf("[%d] %s\n", c, current->str);

		current = current->next;
		c++;
	}

	return (c);
}
