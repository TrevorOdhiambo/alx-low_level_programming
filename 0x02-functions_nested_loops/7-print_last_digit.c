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

	num = c % 10;

	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');

	return (num);
}
