#include "lists.h"
#include <stdlib.h>

/**
 * Written by Kasim Ifeanyi
 */

/**
 * add_nodeint - adds node at list beginning
 * @head: pointer to list beginning
 * @n: element to add
 * Return: address of added element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *old_head = *(head);
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	*head = new_node;
	new_node->n = n;
	new_node->next = old_head;

	return (new_node);
}
