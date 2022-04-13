#include "function_pointers.h"

/**
 * print_name - prints given string in given format
 * @name: given string
 * @f: given format for printing
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
	f(name);
