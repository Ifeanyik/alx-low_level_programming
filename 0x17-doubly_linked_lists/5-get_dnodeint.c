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
	unsigned int length;
	dlistint_t *h;

	if (!head)
		return (NULL);
	h = head;
	for (length = 0; length < index; length++)
	{
		h = h->next;
	}
	return (h);
}
