#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: pointer to the first node
 *
 * Return: the sum, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
