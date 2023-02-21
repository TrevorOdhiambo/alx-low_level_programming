#include "main.h"
#include "_putchar.c"
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
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(6);
	_putchar(r + '0');

	return (0);
}
