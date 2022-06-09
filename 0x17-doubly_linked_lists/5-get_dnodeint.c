#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to head
 * @index: index of node to be gotten
 * Return: returns node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h, *len_ptr;
	unsigned int length, i;

	len_ptr = head;
	for (i = 0; len_ptr; i++)
	{
		len_ptr = len_ptr->next;
	}
	if (index >= i)
		return (NULL);
	h = head;
	for (length = 0; length < index; length++)
	{
		h = h->next;
	}
	return (h);
}
