#include "main.h"
/**
 * _isalpha - check if input is in the alphabet
 * @c: takes a charcter c
 * Return: return 1 or 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'));
}

