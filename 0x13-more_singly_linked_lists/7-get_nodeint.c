#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets node at given index
 * @head: pointer to linked list
 * @index: index of required node
 * Return: pointer to required node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	do {
		if (head != NULL)
		{
			head = head->next;
			count++;
		}
		else
			break;
	} while (head != NULL && count < index);
	if (head != NULL)
		return (head);
	else
		return (NULL);
}
