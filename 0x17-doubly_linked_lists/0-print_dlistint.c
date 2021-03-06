#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints elements in list
 * @h: pointer to list head
 * Return: number of list elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
