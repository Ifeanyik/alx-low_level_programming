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
	dlistint_t *h, *prev_el, *next_el, *ind_addr;
	unsigned int length;

	h = *head;
	if (!h)
		return (-1);
	for (length = 0; h; length++)
	{
		if (length == index)
			ind_addr = h;
	       h = h->next;
	}
	if ((index >= length) || ((index != 0) && (!index)))
		return (-1);
	if (index == 0)
	{
		if (ind_addr->next == NULL)
		{
			free(ind_addr);
			*head = NULL;
			return (1);
		}
		else
		{
			next_el = ind_addr->next;
			next_el->prev = NULL;
			*head = next_el;
			free(ind_addr);
			return (1);
		}
	}
	else if (index == (length - 1))
	{
		prev_el = ind_addr->prev;
		prev_el->next = NULL;
		free(ind_addr);
		return (1);
	}
	prev_el = ind_addr->prev;
	next_el = ind_addr->next;
	prev_el->next = next_el;
	next_el->prev = prev_el;
	free(ind_addr);
	return (1);
}
