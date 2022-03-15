#include <ctype.h>

/**
 * _islower - checks if character is lower case
 *@c: Parameter to be accepted in _islower
 *Return: 1 if character is in lower case
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
