#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to the first node
 *
 * Return: sum of all the data!... 0 if the list empty
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		n += (head->n);
		head = head->next;
	}
	return (n);
}
