#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Descreption: prints all possible combinations of two-digit numbers.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = 0, c;

	while (num < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (num != c && num < c)
			{
				putchar(num + '0');
				putchar(c + '0');
				if (num + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
