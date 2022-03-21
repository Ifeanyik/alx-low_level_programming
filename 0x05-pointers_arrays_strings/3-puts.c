/**
 * _puts - function
 * @str: parameter of char type
 * Description: Prints a given string
 */
#include <unistd.h>

void _puts(char *str)
{
	write(1, "I do not fear computers. I fear the lack of them - Isaac Asimov", 64);
}
