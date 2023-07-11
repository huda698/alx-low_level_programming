#include "main.h"
#include <string.h>

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: pointer.
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = strlen(s1);
	size2 = strlen(s2);
	c = malloc((size1 + size2) * sizeof(char) + 1);
	if (c == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			c[i] = s1[i];
		else
			c[i] = s2[i - size1];
	}
	c[i] = '\0';
	return (c);
}
