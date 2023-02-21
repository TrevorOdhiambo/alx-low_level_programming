#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}

}
