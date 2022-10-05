#include "search_algos.h"

/**
 * binary_search - perform binary search on a sorted array
 * @array: pointer to first array element
 * @size: size of array
 * @value: value to be found in array
 * Return: index of value if found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, middle, count;
	int *temp_pointer, *middle_pointer;

	if (!(*array) && (*array != 0))
		return (-1);
	for(index = 0; ; )
	{
		printf("Searching in array: ");
		temp_pointer = array;
		for(count = index; count < size; count++, temp_pointer++)
			printf("%d, ", *temp_pointer);
		printf("\n");
		middle = (index + (size - 1)) / 2;
		middle_pointer = array;
		for (count = 0; count < middle; count++, middle_pointer++);
		if (*middle_pointer < value)
		{
			index = middle + 1;
			array = middle_pointer++;
		}
		else if (*middle_pointer > value)
			size = middle + 1;
		else if (*middle_pointer == value)
			return (middle);
		return (-1);
	}
	return (-1);
}
