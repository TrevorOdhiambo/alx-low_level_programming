#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: takes an integer
 * Return: return last digit
 *
 */

int print_last_digit(int c)
{
	int num;

	if (c < 0)
	{
		c = -c;
	}
	num = c % 10;
	_putchar(num + '0');
	return (c % 10);
}
