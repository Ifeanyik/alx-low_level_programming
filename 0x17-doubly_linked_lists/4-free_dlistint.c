#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees all elements of a list
 * @head: pointer to head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *former;

	for (; head; i++)
	{
		former = head;
		head = head->next;
		free(former);
	}
}
