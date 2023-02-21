#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute vaue of an integer
 * @c: takes an integer c
 * Return: absolute value
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-1 * c);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}

