#include "main.h"
#include <unistd.h>
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 27);
}
