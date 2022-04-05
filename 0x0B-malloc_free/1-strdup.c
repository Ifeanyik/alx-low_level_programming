#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates array containing string duplicate
 * @str: string to be duplicated
 * Return: array else NULL on failure
 */

char *_strdup(char *str)
{
	char *arr;
	int str_size;
	int i;

	if (str == NULL)
		return (NULL);

	str_size = size(str);
	arr = malloc(sizeof(char) * str_size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < str_size; i++)
	{
		arr[i] = *(str + i);
		if (*(str + (i + 1)) == '\0')
			arr[i + 1] = '\0';
	}
	return (arr);
}

/**
 * size - gets size of given string
 * @str: string to be counted
 * Return: size of string
 */

int size(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}
