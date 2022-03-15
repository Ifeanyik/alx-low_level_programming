#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @a: parameter to be passed
 * Return: last digit of value
 */

int print_last_digit(int a)
{	
	char m = a % 10;
	int b = m;
	write(1, &b, 1);
	return (b);
}
