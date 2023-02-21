#include "main.h"
/**
 * jack_bauer - prints hours through the day
 * Return: 0
 *
 */

void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			else if (hours >= 10)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
			}
			if (mins < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(mins + '0');
			}
			else if (mins >= 10)
			{
				_putchar(':');
				_putchar((mins / 10) + '0');
				_putchar((mins % 10) + '0');
			}

			_putchar(hours);
			_putchar(':');
			_putchar(mins);
		}
		_putchar('\n');

	}
}
