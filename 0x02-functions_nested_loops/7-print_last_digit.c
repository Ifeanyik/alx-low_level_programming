#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @a: parameter to be passed
 * Return: last digit of value
 */
int putchar(char c;)

int print_last_digit(int a)
{	
	int m = a % 10;
	write(1, &m, 1);
	putchar(m + '0');
	return (m);
}

int putchar(char c)
{
	return(write(1, &c, 1));
}
