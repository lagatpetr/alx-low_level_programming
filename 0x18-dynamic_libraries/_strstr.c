#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: contains the substring needle
 * @needle: the substring being looked for
 *
 * Return: pointer to the beginning substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
		{
			return (bhaystack);
		}
		haystack = bhaystack + 1;
	}
	return (0);
}
