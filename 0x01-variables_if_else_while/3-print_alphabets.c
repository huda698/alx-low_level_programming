#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Descreption: print all alphabet letters in lower and UPPER  case.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char l = 'a', U = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
