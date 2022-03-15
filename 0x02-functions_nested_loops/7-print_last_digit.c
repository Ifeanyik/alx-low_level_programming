#include <unistd.h>

/**
 * print_last_digit - prints last digit
 * @a: parameter to be passed
 * Return: last digit of value
 */

int print_last_digit(int a)
{	
	char m = a % 10;
	_putchar(m);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
