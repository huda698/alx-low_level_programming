#include "main.h"

/**
 * main - print all arguments.
 * @argc: array size.
 * @argv: array to string.
 * Return: 0.
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
