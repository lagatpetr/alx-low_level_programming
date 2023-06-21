#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string input
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' || s[i] <= '9'))
		{
			break;
		}
		res = res * 10;
		res += s[i] - '0';

		if (s[0] == '-')
		{
			res *= -1;
		}
	}
	return (res);
}
