#include <ctype.h>
/**
 * _isalpha - Checks if character is alphabet
 * @c: c is a parameter
 *
 * Return: 1 if letter
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
