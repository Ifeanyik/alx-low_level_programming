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
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = h;
	*head = new;
	return (new);
}
