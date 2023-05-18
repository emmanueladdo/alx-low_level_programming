#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node from a `dlistint_t` list
 * @head: pointer to head of Linked list
 * @index: node index to return
 * Return: node at index given or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c;

	temp = head;
	for (c = 0; temp && c < index; temp = temp->next, c++)
		;

	return (temp);
}
