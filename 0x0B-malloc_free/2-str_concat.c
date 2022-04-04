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
	int size_s1, size_s2, sum;
	char *arr;
	int i = 0, j = 0;

	if (s1 == NULL)
		size_s1 = 0;
	else
		size_s1 = size(s1);
	if (s2 == NULL)
		size_s2 = 0;
	else
		size_s2 = size(s2);
	if (s1 == NULL && s2 != NULL)
		sum = size_s2;
	else if (s1 != NULL && s2 == NULL)
		sum = size_s1;
	else
		return (NULL);

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
