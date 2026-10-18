#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer to the pointer to the first node
 * @index: the position to insert the node to be deleted
 *
 * Return: 1, or
 *	-1 operation not successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *current, *next;
	unsigned int i = 0;

	current = *head;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		next = current->next;
		free(current);
		next->prev = NULL;
		*head = next;
		return (1);
	}
	while ((current != NULL) && (i < index))
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (current->next == NULL)
	{
		prev = current->prev;
		prev->next = NULL;
		free(current);
		return (1);
	}
	prev = current->prev;
	next = current->next;
	free(current);
	next->prev = prev;
	prev->next = next;
	return (1);
}
