#include <stddef.h>
#include "lists.h"

/**
 * Written by Kasim Ifeanyi
 * listint_len - gets number of nodes
 * @h: pointer to nodes
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
