#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all memebers of the list
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;/*The counter for iteration*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
