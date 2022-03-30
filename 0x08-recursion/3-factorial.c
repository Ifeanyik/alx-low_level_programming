#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: int type parameter
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * fact(n - 1));
}

/**
 * fact - recursive function to provide factorial
 * @n: int type parameter
 * Return: integer
 */

int fact(int n)
{
	if (n == 0)
		return (1);
	return (n * fact(n - 1));
}
