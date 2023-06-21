#include "main.h"

/**
 * jack_bauer - the function that prints every minute of the day of Jack Bauer.
 */

void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
			_putchar('\n');
		}
	}
}
