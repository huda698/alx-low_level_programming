#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer.
 * @n: integer.
 * Return: the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !NewNode)
		return (NULL);
	NewNode->next = NULL;
	NewNode->n = n;
	if (!*head)
		*head = NewNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = NewNode;
	}
	return (NewNode);
}
