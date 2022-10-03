#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!(*array) && (*array != 0))
		return (-1);
	for (index = 0; index < size; index++, array++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, *array);
		if (*array == value)
			return (index);
	}
	return (-1);
}
