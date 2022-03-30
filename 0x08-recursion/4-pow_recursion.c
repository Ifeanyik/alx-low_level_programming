#include "main.h"

/**
 * _pow_recursion - getting exponentials
 * @x: integer parameter type
 * @y: integer prameter type
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (power(x, y, x));
}

/**
 * power - the one that actuually does work
 * @x: integer parameter type
 * @y: integer parameter type
 * @x_init: integer parameter type
 * Return: integer
 */

int power(int x, int y, int x_init)
{
	if (y == 1)
		return (x);
	x *= x_init;
	return (power(x, --y, x_init));
}
