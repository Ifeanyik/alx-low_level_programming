#include "search_algos.h"

/**
 * print_array - prints array being searched
 * @array: pointer to first array element
 * @index: index of current first array element
 * @size: current index of last element in array
 * Return: never
 */

void print_array(int *array, int index, int size)
{
	printf("Searching in array: ");
	for (; index < size; index++, array++)
	{
		printf("%d", *array);
		(index < size - 1) ? printf(", ") : printf("\n");
	}
}

/**
 * binary_search - perform binary search on a sorted array
 * @array: pointer to first array element
 * @size: size of array
 * @value: value to be found in array
 * Return: index of value if found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, middle, count, first_index;
	int *temp_pointer, *middle_pointer;

	if (!(*array) && (*array != 0))
		return (-1);
	for (index = 0; index < size; )
	{
		first_index = index;
		print_array(array, index, size);
		middle = (index + (size - 1)) / 2;
		middle_pointer = array;
		for (count = index; count < middle; count++, middle_pointer++)
		if (*middle_pointer < value)
		{
			temp_pointer = middle_pointer;
			++temp_pointer;
			if ((++first_index - middle) == 1)
			{
				if (value == *temp_pointer)
					return (middle + 1);
				else
					return (-1);
			}
			index = ++middle;
			array = ++middle_pointer;
		}
		else if (*middle_pointer > value)
		{
			temp_pointer = middle_pointer;
			--temp_pointer;
			if ((middle - first_index) == 1)
			{
				if (value == *temp_pointer)
					return (middle - 1);
				else
					return (-1);
			}
			size = middle;
		}
		else
			return (middle);
	}
	return (-1);
}
