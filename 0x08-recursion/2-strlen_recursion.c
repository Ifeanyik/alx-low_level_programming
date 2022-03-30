#include "main.h"

/**
 * _strlen_recursion - returns size of given string
 * @s: character type parameter
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int p = size(s, i);

	return (p);
}

/**
 * size - returns size of given string
 * @a: character type parameter
 * @count: integer type parameter
 * Return: integer
 */

int size(char *a, int count)
{
	if (a[count] == '\0')
		return (count);

	return (size(a, ++count));
}
