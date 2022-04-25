#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to list end
 * @head: pointer to pointer to list
 * @n: element to be added
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (!new_node)
		return (NULL);
	if (!h)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (h->next)
		h = h->next;
	h->next = new_node;
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
