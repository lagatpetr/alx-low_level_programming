#include "list.h"
#include <stdio.h>
/**
 * div - dividea two ints
 * @a: first int
 * @b: second int
 * Return: value of division of the two
 */
int div(int a, int b)
{
	int d;

	if (a < 0 || b < 0)
		return (0);
	d = a / b;
	return (d);
}
