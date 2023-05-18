#include "lists.h"

/**
 * print_dlistint - Prints all the values of each node in `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	for (count = 0; tmp; count++, tmp = tmp->next)
		printf("%d\n", tmp->n);

	return (count);
}
