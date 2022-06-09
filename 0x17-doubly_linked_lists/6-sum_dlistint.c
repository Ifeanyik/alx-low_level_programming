#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of elements in list
 * @head: pointer to head node
 * Return: sum of list elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *h;

	if (!head)
		return (0);
	h = head;
	for (sum = 0; h;)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
