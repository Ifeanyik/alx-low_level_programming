#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: given array
 * @size: array size
 * @cmp: given function
 * Return: u go see something sha
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	unsigned int j;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
		i++;
	}
	return (-1);
}
