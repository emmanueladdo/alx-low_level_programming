#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list of integers.
 * @head: A pointer to a pointer to the head node of the list.
 * Return: The integer value stored in the head, 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	val = temp->n;
	*head = (*head)->next;
	free(temp);

	return (val);
}
