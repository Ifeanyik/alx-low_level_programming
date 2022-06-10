#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to pointer to head node
 * @index: index of node to be deleted
 * Return: 1 if successful else 1
 */



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *prev_el, *next_el, *head_addr;
	unsigned int i, length;

	h = *head;
	head_addr = *head;
	for (length = 0; h; length++)
	       h = h->next;
	if ((index >= length) || (!index))
		return (-1);
	h = head_addr;
	for (i = 0; h; i++)
	{
		if (i == index)
		{
			/*must add else*/
			if (i == 0)
			{
				*head = h->next;
				free(h);
				return (1);
			}
			else if (i == (length - 1))
			{
				prev_el = h->prev;
				prev_el->next = NULL;
				free(h);
				return (1);
			}
			prev_el = h->prev;
			next_el = h->next;
			prev_el->next = next_el;
			next_el->prev = prev_el;
			free(h);
		}
		h = h->next;
	}
	return (-1);
}
