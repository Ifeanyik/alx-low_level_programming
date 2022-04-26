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
	listint_t *h;

	if (head != NULL)
	{
		h = *head;
		while ((addr_keep = h) != NULL)
		{
			h = h->next;
			free(addr_keep);
		}
		*head = NULL;
	}
}
