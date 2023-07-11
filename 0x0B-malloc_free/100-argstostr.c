#include "main.h"
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of program.
 *
 * @ac: int.
 *
 * @av: arguments.
 *
 * Return: string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, n++)
		n += strlen(av[i]);
	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			s[c] = av[i][j];
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
