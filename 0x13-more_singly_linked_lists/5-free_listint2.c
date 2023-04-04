#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers and sets head to NULL.
 * @head: A pointer to a pointer to the head node of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
