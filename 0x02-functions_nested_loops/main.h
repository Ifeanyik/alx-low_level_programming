#include <unistd.h>
int _putchar(char c);

void print_alphabet(void);

void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
