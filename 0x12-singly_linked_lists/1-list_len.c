#include <stddef.h>
#include "lists.h"

/**
 * list_len - finds length of linked list
 * @h: pointer to singly linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t ele_num = 0;

	while (h)
	{
		if (h->len && h->str)
			ele_num++;
		else if (h->len)
			ele_num++;
		h = h->next;
	}
	return (ele_num);
}
