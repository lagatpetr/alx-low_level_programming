#include "list.h"
#include <stdio.h>
/**
 * mod - finds reminder of division of two ints
 * @a: int one
 * @b: int two
 * Return: modulus of the two
 */
int mod(int a, int b)
{
	int m;

	if (a < 0 || b < 0)
		return (a);
	m = a % b;
	return (m);
}
