#include <stdio.h>

/**
 * main - Entry ponit
 *
 * Descreption: prints all possible different
 *
 * combinations of two-digit numbers.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = 0, num1;

	while (num <= 99)
	{
		num1 = num;
		while (num1 <= 99)
		{
			if (num1 != num)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				if (num + num1 != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
