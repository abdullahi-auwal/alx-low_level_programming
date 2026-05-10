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

	if (*head != NULL)
		return (0);
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
	return (1);
}
