#include <unistd.h>
/**
 * main - Betty's annoying
 *print_alphabet - Prints all alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
