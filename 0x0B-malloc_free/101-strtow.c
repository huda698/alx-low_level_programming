#include "main.h"

/**
 * count - counts the number of words in string.
 *
 * @c: string to count.
 *
 * Return: int of number of words.
 */

int count(char *c)
{
	int i, n = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == ' ')
		{
			if (c[i + 1] != ' ' && c[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * **strtow - splits a string into words.
 *
 * @str: string.
 *
 * Return: array of strings.
 */

char **strtow(char *str)
{
	int i = 0, j, l, k, n = 0, w = 0;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	c = (char **)malloc(n * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			c[w] = (char *)malloc(j * sizeof(char));
			j--;
			if (c[w] == NULL)
			{
				for (k = 0; k < w; k++)
					free(c[k]);
				free(c[n - 1]);
				free(c);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				c[w][l] = str[i + l];
			c[w][l] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (c);
}
