#include "main.h"
#include "_putchar.c"
/**
 * _isalpha - check if input is in the alphabet
 * @c: takes a charcter c
 * Return: return 1 or 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') && (c >= 'A' && c >= 'Z'));
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _isalpha('o');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
