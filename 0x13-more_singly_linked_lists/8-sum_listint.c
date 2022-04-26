#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all node elements
 * @head: pointer to linked list
 * Return: sum of list elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
