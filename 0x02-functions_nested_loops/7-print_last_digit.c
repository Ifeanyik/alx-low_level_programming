#include <unistd.h>

/**
 * print_last_digit - prints last digit
 * @a: parameter to be passed
 * Return: last digit of value
 */

int print_last_digit(int a)
{
	int  m = a % 10;
	char r = m
	write(1, r, 1);
	return (r);
}
