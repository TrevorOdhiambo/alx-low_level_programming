#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (num2 = 0; num2 < 6; num2++)
	{
		putchar(num2 + 'a');
	}

	putchar('\n');

	return (0);
}
