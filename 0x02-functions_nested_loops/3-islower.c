#include "main.h"
#include "_putchar.c"
/**
 * _islower - check if letter is lowercase
 * @c: takes a charcter c
 * Return: return 1 or 0
 *
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _islower('o');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
