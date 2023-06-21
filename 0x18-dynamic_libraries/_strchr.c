#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string that may have the character
 * @c: the character
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
