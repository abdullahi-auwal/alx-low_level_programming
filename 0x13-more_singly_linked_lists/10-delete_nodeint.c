#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to the pointer to the first node
 * @idx: the index
 *
 * Return: 1, -1 if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *previous;
	listint_t *the_node;

	unsigned int i = 0;

	previous = *head;
	if (previous == NULL)
		return (-1);
	if (idx == 0)
	{
		if ((previous->next) != NULL)
		{
			the_node = *head;
			*head = (*head)->next;
			free(the_node);
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	if (idx > 0)
	{
		while ((previous != NULL) && (i < (idx - 1)))
		{
			previous = previous->next;
			i++;
		}
	}
	if ((i > 0) && (previous == NULL))
		return (-1);
	the_node = previous->next;
	previous->next = the_node->next;
	free(the_node);
	return (1);
}
