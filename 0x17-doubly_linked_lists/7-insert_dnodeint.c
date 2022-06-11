#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int length;
	dlistint_t *head, *new_node, *former_el;

	if (!(*h))
		return (NULL);
	head = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	for (length = 0; head; length++)
	{
		if (length == idx)
			former_el = head;
		head = head->next;
	}
	if ((idx >= length) || ((idx != 0) && (!idx)))
		return (NULL);
	if (idx == 0)
	{
		new_node = one_element(former_el, new_node, h, n);
		return (new_node);
	}
	else if (idx == (length - 1))
	{
		new_node = end(former_el, new_node, n);
		return (new_node);
	}
	new_node = middle(former_el, new_node, n);
	return (new_node);
}

/**
 * one_element - inserts node if index is 0
 * @former_el: address of current element at index
 * @new_node: address of new nodw
 * @h: address of original header node
 * Return: address of new element
 */

dlistint_t *one_element(dlistint_t *former_el, dlistint_t *new_node, dlistint_t **h, int n)
{
	former_el->prev = new_node;
	new_node->next = former_el;
	new_node->prev = NULL;
	new_node->n = n;
	*h = new_node;
	return (new_node);
}

/**
 * end - inserts node if index is last element
 * @former_el: element currently at index
 * @new_node: address of new_node
 * @n: element in new_node
 * Return: address of new node
 */

dlistint_t *end(dlistint_t *former_el, dlistint_t *new_node, int n)
{
	new_node->prev = former_el->prev;
	new_node->next = former_el;
	(new_node->prev)->next = new_node;
	former_el->prev = new_node;
	former_el->next = NULL;
	new_node->n = n;
	return (new_node);
}

/**
 * middle - inserts node if idx is between two elements
 * @former_el: address of element currently at idx
 * @new_node: address of new node
 * @n: new element
 * Return: address of new node
 */

dlistint_t *middle(dlistint_t *former_el, dlistint_t *new_node, int n)
{
	new_node->n = n;
	new_node->prev = former_el->prev;
	new_node->next = former_el;
	(former_el->prev)->next = new_node;
	former_el->prev = new_node;
	return (new_node);
}
