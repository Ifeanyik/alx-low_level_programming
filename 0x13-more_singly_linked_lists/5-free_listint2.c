#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees given linked list
 * @head: pointer to first list element
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *addr_keep;
	listint_t *h = *head;

	if (!h)
		return;
	while (h)
	{
		addr_keep = h->next;
		free(h);
		h = addr_keep;
	}
	*head = NULL;
}
