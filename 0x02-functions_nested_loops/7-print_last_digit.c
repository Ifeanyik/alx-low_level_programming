#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @a: parameter to be passed
 * Return: last digit of value
 */

int print_last_digit(int a)
{	
	int m = a % 10;
	putchar(m + '0');
	return (m);
}
