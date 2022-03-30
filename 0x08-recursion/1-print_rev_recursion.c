#include "main.h"

/**
 * _print_rev_recursion - calls function to reverse string
 * @s: character type parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int s_size = size(s, 0);
	reverse (--s_size, s);
}

/**
 * reverse - reverses string
 * @size: integer type parameter
 * @arr: character type parameter
 * Return: void
 */

void reverse(int size, char *arr)
{
	write(1, arr + size, 1);
	if (size != 0)
		reverse(--size, arr);
}
