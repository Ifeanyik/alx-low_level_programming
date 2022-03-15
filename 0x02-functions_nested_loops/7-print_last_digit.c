#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @a: parameter to be passed
 * Return: last digit of value
 */

char print_last_digit(int a)
{	
	int m = a % 10;
	return(write(1, &m, 1));
