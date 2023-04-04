#include "lists.h"

/**
 *add_nodeint_end - add a new node at the end of the linked list
 *@head: a double to the head of the list
 *@n: the integer value to be stored in the new node
 *Return: the address to the new, or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
