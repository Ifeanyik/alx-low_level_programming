#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all given arguments
 * @format: list of argument types
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list me;
	unsigned int t, f = 0, c = 0;
	char *str;
	const char types[] = "cifs";

	va_start(me, format);
	while (format[f])
	{
		t = 0;
		while (types[t])
		{
			if (format[f] == types[t] && c)
			{
				printf(", ");
				break;
			}
			t++;
		}
		switch (format[f])
		{
			case 'c':
				printf("%d", va_arg(me, int));
				c = 1;
				break;
			case 'i':
				printf("%d", va_arg(me, int));
				c = 1;
				break;
			case 'f':
				printf("%f", va_arg(me, double));
				c = 1;
				break;
			case 's':
			str = va_arg(me, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		f++;
	}
	printf("\n");
	va_end(me);
}
