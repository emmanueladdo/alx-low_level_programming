#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data `n` of a `dlistint_t` List
 * * @head: head of doubly List
 * Return: sum of all `n` or 0 if List is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;

	return (sum);
}
