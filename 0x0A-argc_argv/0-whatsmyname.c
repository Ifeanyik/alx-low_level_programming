#include <stdio.h>

/**
 * main - prints path of program being executed
 * @argc: number of arguments passed to program
 * @argv: arrays of arguments passed
 * Return: 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
