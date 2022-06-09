#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - gets number of list elements
 * @h: pointer to header
 * Return: number of list elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
