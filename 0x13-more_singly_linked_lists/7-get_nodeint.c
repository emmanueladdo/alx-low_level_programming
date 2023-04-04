#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list of integers.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to be returned, starting at 0.
 * Return: A pointer to the nth node of the list, NULL if it does not exist.
 */

listint *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int c = 0;

	while (current != NULL)
	{
		if (c == index)
			return (current);
		c++;
		current == current->next;
	}
	return (NULL);
}
