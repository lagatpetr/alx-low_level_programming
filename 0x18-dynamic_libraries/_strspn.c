#include "main.h"

/**
 * _strspn - gets lenth of prefix substring
 * @s: string containing content
 * @accept: string to be checked for s content
 *
 * Return: length of initial segment s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, j;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}
	return (len);
}
