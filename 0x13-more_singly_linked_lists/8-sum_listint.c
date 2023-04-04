#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the integers in a linked list.
 * @head: A pointer to the head node of the list.
 * Return: The sum of all the integers in the list, or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
