#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at list end
 * @head: pointer to head node
 * @n: Node element to be added
 * Return: Address of element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *h;

	h = *head;
	if (h)
	{
		for (; h->next;)
			h = h->next;
		end = malloc(sizeof(dlistint_t));
		if (!end)
			return (NULL);
		end->prev = h;
		end->n = n;
		end->next = NULL;
		h->next = end;
		return (end);
	}
	else
	{
		end = malloc(sizeof(dlistint_t));
		if (!end)
			return (NULL);
		end->n = n;
		end->prev = NULL;
		end->next = NULL;
		*head = end;
		return (end);
	}
	return (NULL);
}
