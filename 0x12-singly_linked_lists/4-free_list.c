#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		/**
		 * the next address is stored in a temporary variable
		 * free the space for the str and then finally
		 * free the node,
		 */
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
