#include "main.h"
#include <stdlib.h>

/**
 * create_arrray - creates arrayf of given size
 * initialized with given character
 * @size: size of array
 * @c: character given
 * Return: pointer to array or 0 if failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return NULL;
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	else
		for (i = 0; i < size; i++)
			arr[i] = c;
	return (arr);
}
