#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Descreption: prints numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = 48;

	while (num < 103)
	{
		putchar(num);
		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');
	return (0);
}
