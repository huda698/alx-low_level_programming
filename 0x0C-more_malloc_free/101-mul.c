#include "main.h"

/**
 * _puts - prints a string.
 * @str: string.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an integer.
 * @s: string parameter.
 * Return: converted integer.
 */

int _atoi(const char *s)
{
	unsigned int n = 0;
	int sg = 1;

	do {
		if (*s == '-')
			sg *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * sg);
}

/**
 * print_int - prints an integer.
 * @n: integer.
 */

void print_int(unsigned long int n)
{
	unsigned long int i, j = 1, k;

	for (i = 0; n / j > 9; i++, j *= 10)
		;
	for (; j >= 1; n %= j, j /= 10)
	{
		k = n / j;
		_putchar('0' + k);
	}
}

/**
 * main - entry point.
 * @argc: integer.
 * @argv: list.
 * Return: 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
