#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area.
 *
 * @b: constant byte.
 *
 * @n: max bytes.
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array.
 *
 * @nmemb: array length.
 *
 * @size: size of each element.
 *
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	n = malloc(sizeof(int) * nmemb);
	if (n == 0)
	{
		return (NULL);
	}
	_memset(n, 0, sizeof(int) * nmemb);
	return (n);
}
