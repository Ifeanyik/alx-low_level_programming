#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints given strings
 * @separator: separating string
 * @n: first required parameter
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list me;
	char *x;

	va_start(me, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(me, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL && (i + 1) < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(me);
}
