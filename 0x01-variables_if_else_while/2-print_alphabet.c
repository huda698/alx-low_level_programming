#include <stdio.h>
/**
 * main - Entry ponit
 *
 * Descreption: print all alphabet letters in lower case.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
