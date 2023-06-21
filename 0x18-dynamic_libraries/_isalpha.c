#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 *
 * @c: is the character to be checked
 *
 * Return: Numbers above 0 for alphabets
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
