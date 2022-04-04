#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of given size
 * @size: size of array
 * @c: character given
 * Return: pointer to array or 0 if failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
