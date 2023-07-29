#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first node.
 */

void free_list(list_t *head)
{
	list_t *node, *nextnode;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nextnode = node->next;
		free(node->str);
		free(node);
		node = nextnode;
	}
}
