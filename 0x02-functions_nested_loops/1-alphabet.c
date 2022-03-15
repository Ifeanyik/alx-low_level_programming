#include <unistd.h>

void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 27);
}
