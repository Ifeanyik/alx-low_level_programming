#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * Written by Kasim Ifeanyi
 * print_listint - prints list elements
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	
	return (node_num);
}
