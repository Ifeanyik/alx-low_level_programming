#include "main.h"
#include <stdlib.h>

/**
 *size - gets size of given string
 * @str: string parameter
 * Return: size of given string
 */

int size(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenates given strings
 * @s1: first given string
 * @s2: second given string
 * Return: NULL if failure else pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int size_s1 = size(s1);
	int size_s2 = size(s2);
	int sum = size_s1 + size_s2;
	char *arr;
	int i = 0, j = 0;

	arr = malloc(sum * sizeof(char));

	if (arr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	return (arr);
}
