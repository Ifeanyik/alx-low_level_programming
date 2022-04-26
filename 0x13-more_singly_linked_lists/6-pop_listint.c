#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes head node
 * @head: pointer to list
 * Return: data in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *addr = *head;
	int data;

	if (!addr)
		return (0);
	data = addr->n;
	*head = addr->next;
	free(addr);
	return (data);
}
