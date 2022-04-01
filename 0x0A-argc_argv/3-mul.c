#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies given nums
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful else returns 1
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
