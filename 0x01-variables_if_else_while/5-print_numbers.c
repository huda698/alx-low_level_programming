#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Descreption: prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
