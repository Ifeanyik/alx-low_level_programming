#include <unistd.h>
/**
 * main - Betty's annoying
 * Return: Always 0
 */

void print_alphabet(void)
{
	/**prints all alphabets in lower case */
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
