#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - performs action on array elements
 * @array: pointer to array
 * @size: array size
 * @action: function passed as argument
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
