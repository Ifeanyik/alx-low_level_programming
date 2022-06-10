#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, length;
	dlistint_t *head, *new_node, *head1, *former_ele;

	head = *h;
	head1 = *h;
	for (length = 0; head; length++)
		head = head->next;
	if (idx > length)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	for (i = 0; head1; i++)
	{/*Create else condition?*/
		if (i == idx)
		{
			former_ele = head1;
			new_node->next = former_ele;
			new_node->n = n;
			new_node->prev = former_ele->prev;
			(former_ele->prev)->next = new_node;
			former_ele->prev = new_node;
			break;
		}
		head1 = head1->next;
	}
	return (new_node);
}

