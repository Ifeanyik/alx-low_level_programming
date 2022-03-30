#include "main.h"

/**
 * _print_rev_recursion - prints given string in reverse
 * @s: character type parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int s_size = size(s, 0);
	char new_arr[s_size];
	int counter = 0;

	arr_adder(new_arr, s, s_size - 1, counter);
	write(1, new_arr, s_size);
}

/**
 * arr_adder - reverses the given array
 * @array: new reversed array
 * @old_array: initial array
 * @size: size of reverse array
 * @count: size of other array
 * Return: void
 */

int arr_adder(char array[], char old_array[], int size, int count)
{
	if (size < 0)
		return (0);

	array[count] = old_array[size];
	--size;
	++count;
	arr_adder(array, old_array, size, count);
}

/**
 * size - gets size of given array
 * @a: array parameter
 * @count: starting value of array size
 * Return: array size
 */

int size(char *a, int count)
{
	if (a[count] == '\0')
		return (count);

	return (size(a, ++count));
}
