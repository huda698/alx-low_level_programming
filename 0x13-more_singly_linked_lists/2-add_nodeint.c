#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer.
 * @n: integer.
 * Return: the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));

	if (!head || !NewNode)
		return (NULL);
	NewNode->next = NULL;
	NewNode->n = n;
	if (*head)
		NewNode->next = *head;
	*head = NewNode;
	return (NewNode);
}
