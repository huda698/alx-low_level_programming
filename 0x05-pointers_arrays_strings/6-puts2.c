#include "main.h"
#include <string.h>

/**
 * puts2 - prints even numbers.
 *
 * @str: string parameter.
 */

void puts2(char *str)
{
	int i, j;

	i = strlen(str);
	for (j = 0; j < i; j++)
	{
		if (str[j] % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
