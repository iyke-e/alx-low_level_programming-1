#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	/* initialzing a node */
	size_t nodes = 0;

	while (h)
	{
		if (h.str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h.len, h.str);
		}
		nodes++;
		/**
		 * going to the next node by accessing the
		 * address from this current node
		 */
		h = h.next;
	}
	return (nodes);
}
