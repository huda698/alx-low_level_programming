#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: array size.
 * @argv: array to string.
 * Return: 0.
 */

int main(int argc, char const *argv[])
{
	int sum = 0, i;

	for (i = 0; i < argc; i++)
	{
		if (argc && argc > 0)
			sum += atoi(argv[i]);
		if (argc < '0' || argc > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
