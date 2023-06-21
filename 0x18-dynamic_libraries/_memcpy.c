#include "main.h"

/**
 * _memcpy - copies characters from src to dest
 * @src: where characters are sourced
 * @dest: where characters are put
 * @n: quantity of characters copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
