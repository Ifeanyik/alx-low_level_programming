#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints given numbers
 * @separator: string to be printed between numbers
 * @n: num of integers passed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int y;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		y = va_arg(ap, int);
		printf("%d", y);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
