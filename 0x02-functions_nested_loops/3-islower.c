#include <ctype.h>

/**
 * _islower - checks if character is lower case
 * Return: Always 0
 */

int _islower(int c)
{
	if (islower(c))
		return (0);
	else
		return (1);
}
