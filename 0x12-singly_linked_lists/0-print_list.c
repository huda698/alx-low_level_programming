#include "lists.h"

/**
 * _strlen - this is a function that returns the length of a string.
 *
 * @s: function input.
 *
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - print all elements of list.
 * @h: first node.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
