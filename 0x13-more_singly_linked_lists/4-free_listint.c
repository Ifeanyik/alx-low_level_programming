#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees given list
 * @head: first element address
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *addr_keep;
	listint_t *h = head;

	while (h)
	{
		addr_keep = h->next;
		free(h);
		h = addr_keep;
	}
}
