#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		int i = 0;

		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
