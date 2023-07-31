#include "main.h"

/** 
 * main - print the number of arguments.
 * @argc: array size.
 * @argv: array to string.
 * Return: 0.
 */

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
