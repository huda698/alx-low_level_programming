#include "main.h"
#include <stdio.h>

/**
 * lower - determine lowercase alphabet.
 *
 * @c: character.
 *
 * Return: 0 if false, 1 if true.
 */

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * delimiter - determine delimiter.
 *
 * @c: character.
 *
 * Return: 0 if false, 1 if true.
 */

int delimiter(char c)
{
	int i;
	char d[] = "\t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == d[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string input.
 *
 * Return: capitalizes words.
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int del = 1;

	while (*s)
	{
		if (delimiter(*s))
			del = 1;
		else if (lower(*s) && del)
		{
			*s -= 32;
			del = 0;
		}
		else
			del = 0;
		s++;
	}
	return (ptr);
}
