#include <stdio.h>

/**
 * main - Entry point
 *
 * this is a program that prints the first 98 Fibonacci numbers.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (i = 1; i <= 98; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;
		if (i == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
