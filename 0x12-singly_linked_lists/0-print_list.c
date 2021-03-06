#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		++node_num;
	}
	return (node_num);
}
