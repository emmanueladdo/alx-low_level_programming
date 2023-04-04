#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: A pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
