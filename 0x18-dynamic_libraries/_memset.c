#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the area where the byte is to filled
 * @b: the actula character to fill the area
 * @n: number of bytes in s to be filled
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
