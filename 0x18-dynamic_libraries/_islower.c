#include "main.h"

/**
 * _islower - checks if a number is a lowercase character
 * @c: The character to be checked
 *
 * Return: 0 if its a uppercase character and above 0 when it is lowercase
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
