#include <stdlib.h>
#include <stddef.h>
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

/**
 * add_dnodeint_end - add node at list end
 * @head: pointer to head node
 * @n: Node element to be added
 * Return: Address of element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *h, *second_to_last;
	size_t length, i;

	end = malloc(sizeof(dlistint_t));
	h = *head;
	if (!end)
		return NULL;
	if (!h)
	{
		*head = end;
		end->n = n;
		end->next = NULL;
		end->prev = NULL;
		return (end);

	}
	length = dlistint_len(h);
	for (i = 1; h->next; i++)
	{
		if (i == length)
			second_to_last = h;
		h = h->next;
	}
	h->next = end;
	end->n = n;
	end->next = NULL;
	end->prev = second_to_last;
	return (end);
}
