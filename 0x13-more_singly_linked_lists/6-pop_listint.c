#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the linked list
 * @head: pointer to the pointer to the head node
 *
 * Return: returns 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int n;

	if (*head == NULL)
		return (0);
	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;
	return (n);
}
