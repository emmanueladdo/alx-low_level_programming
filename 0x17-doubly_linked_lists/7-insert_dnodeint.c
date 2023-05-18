#include "lists.h"

/**
 * insert_dnodeint_at_idx - Inserts a new node at a given position in a d-list.
 * @h: Double pointer to the head.
 * @idx: Index of the position.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
	if (idx == 0)
		return (insert_at_start(h, n));

	if (*h == NULL)
		return (NULL);

	dlistint_t *current = *h;
	unsigned int count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (insert_at_end(h, n));

	return (insert_in_middle(current, n));
}

/**
 * insert_at_start - Inserts a new node at the start of a d-list.
 * @h: Double pointer to the head.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node.
 */
dlistint_t *insert_at_start(dlistint_t **h, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *h;

	if (*h != NULL)
		(*h)->prev = new_node;

	*h = new_node;
	return (new_node);
}

/**
 * insert_at_end - Inserts a new node at the end of a d-list.
 * @h: Double pointer to the head.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node.
 */
dlistint_t *insert_at_end(dlistint_t **h, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	dlistint_t *current = *h;

	while (current->next != NULL)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}

/**
 * insert_in_middle - Inserts a new node in the middle of a d-list.
 * @current: Pointer to the node after which to insert the new node.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node.
 */
dlistint_t *insert_in_middle(dlistint_t *current, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

