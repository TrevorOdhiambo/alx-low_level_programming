#include "main.h"
/**
 *print_sign - check if sign is positive or negtive
 * @c: takes n int c
 * Return: return 1 or 0
 *
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
	{
		_putchar('0');

		return (0);
	}

}
