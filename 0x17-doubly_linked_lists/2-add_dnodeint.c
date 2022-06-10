#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add element at list beginning
 * @head: pointer to head
 * @n: Element to add
 * Return: address of new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	h = *head;
	if (h)
	{/*if head is not empty*/
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		h->prev = new;
		new->n = n;
		new->prev = NULL;
		new->next = h;
		*head = new;
		return (new);
	}
	else
	{/*if head is empty*/
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	return (NULL);
}
