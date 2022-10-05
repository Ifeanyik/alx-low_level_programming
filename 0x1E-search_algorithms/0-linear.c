#include "search_algos.h"

/**
 * linear_search - performs linear search on an array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: index of value if found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!(*array) && (*array != 0))
		return (-1);
	if (!value && (value != 0))
		return (-1);
	for (index = 0; index < size; index++, array++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, *array);
		if (*array == value)
			return (index);
	}
	return (-1);
}
