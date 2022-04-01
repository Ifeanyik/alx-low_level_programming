#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints sum of integers
 * @argc: number of arguments
 * @argv: array of given arguments
 * Return: 0 if successful else 1
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
