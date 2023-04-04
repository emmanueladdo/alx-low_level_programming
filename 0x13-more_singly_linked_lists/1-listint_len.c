#include "lists.h"

/**
 * listint_len - returns tthe number of the elements in the linked lists
 * @h: a pointer to the head of the list
 * Return: the number of memebers in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
