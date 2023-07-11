#include "main.h"

/**
 * *create_array - creates an array of characters.
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 *
 * @c: initialize character.
 *
 * Return: pointer to the array initialized or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size] = c;
	return (i);
}
