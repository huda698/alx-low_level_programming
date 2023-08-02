#include "lists.h"

/**
 * sum_listint - calculate the sum of all data of a list.
 * @head: pointer.
 * Return: the sum of all data of the list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
