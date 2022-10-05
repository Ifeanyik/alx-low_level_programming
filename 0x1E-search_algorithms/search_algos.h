#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int index, int size);

#endif
