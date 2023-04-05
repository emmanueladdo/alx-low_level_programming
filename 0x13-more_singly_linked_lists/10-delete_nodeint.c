#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: a pointer to a pointer to the head of the linked list
 * @index: the index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur;
	listint_t *tmp;
	unsigned int i;

	i = 0;
	cur = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		tmp = cur;
		if (cur->next)
			cur = cur->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = cur->next;
	else if (cur->next)
		tmp->next = cur->next;
	else
		tmp->next = NULL;

	free(cur);
	return (1);
}
