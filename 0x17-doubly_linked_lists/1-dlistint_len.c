#include "lists.h"

/**
 * dlistint_len - Finds the number of nodes in a doubly linked list
 * @h: head pointer to Linked List
 * Return: number of nodes in Linked List
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	while (temp && temp->prev)
		temp = temp->prev;

	for (count = 0; temp; count++, temp = temp->next)
		;

	return (count);
}
