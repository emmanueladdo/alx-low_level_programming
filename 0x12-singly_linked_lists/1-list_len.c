#include "lists.h"

/**
 *list_len - Return the number of elements in the linked list
 *@h: head of the linked list
 *Return: Returns number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
