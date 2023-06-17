#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Descreption: prints all possible combinations of three-digit numbers.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = 0, num1, num2;

	while (num < 10)
	{
		num1 = 1;
		while (num1 < 10)
		{
			num2 = 2;
			while (num2 < 10)
			{
				if (num != num1 && num < num1 && num1 != num2 && num1 < num2)
				{
					putchar(num + '0');
					putchar(num1 + '0');
					putchar(num2 + '0');
					if (num + num1 + num2 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num2++;
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}

