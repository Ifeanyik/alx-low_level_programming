#include <unistd.h>

/**
 * print_alphabet_x10 - Prints all alphabets in  lower case 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		i++;
	}
}
