#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the first node
 * @idx: the index
 * @n: the data
 *
 * Return: address of the new node, NULL if unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	listint_t *next;

	unsigned int i = 0;

	current = *head;
	if (idx != 0)
	{
		while ((current != NULL) && (i < (idx - 1)))
		{
			current = current->next;
			i++;
		}
	}
	if ((i > 0) && (current == NULL))
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if ((idx == 0) && (current  != NULL))
	{
		new->next = current;
		*head = new;
		return (new);
	}
	if (current == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	next = current->next;
	current->next = new;
	new->next = next;
	return (new);
}
