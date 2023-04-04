#include "lists.h"

/**
 *add_nodeint - add new node at the start of the list
 *@head: double pointer to head of the node
 *@n: int value to store in new
 *Return: address of new element or Null when failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
