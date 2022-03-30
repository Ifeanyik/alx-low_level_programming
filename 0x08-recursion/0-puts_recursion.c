#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string parameter to be printed
 */

void _puts_recursion(char *s)
{
    int s_size = 0;

    while (s[s_size] != '\0')
    {
        s_size++;
    }

    write(1, s, s_size);
    write(1, "\n", 1);
}
