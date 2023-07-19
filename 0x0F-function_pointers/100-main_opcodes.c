#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @arg: the number of arg.
 * @argv: the argument vector.
 * Return: 0 (Success).
 */

int main(int arg, char **argv)
{
	char *p = (char *)main;
	int b;

	if (arg != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
