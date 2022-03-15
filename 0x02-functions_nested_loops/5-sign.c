#include <unistd.h>

/**
 * print_sign - Returns 1 if number is greater than 0
 * 0 if number is equat to 0
 * -1 if number is less than 0
 *  @n: parameter to be passed
 * Return: 1 if num positive
 * 0 if num is zero
 * -1 if num is negative
 */

int print_sign(int n)
{
	if (n > 1)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
}
