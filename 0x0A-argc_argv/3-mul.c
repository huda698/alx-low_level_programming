#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: array size.
 * @argv: array to string.
 * Return: 0.
 */

int main(int argc, char const *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
