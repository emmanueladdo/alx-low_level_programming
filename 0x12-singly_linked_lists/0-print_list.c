#include "lists.h"
#include <stdio.h>

/**
 *print_list -print all element of `list_t` list
 *@h: head of linked list
 *Return: Returns the number of node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
