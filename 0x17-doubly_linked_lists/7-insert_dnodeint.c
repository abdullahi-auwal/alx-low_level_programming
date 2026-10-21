#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insets a new node at a given position
 * @h: pointer to the pointer to the first node
 * @idx: the position to insert the node
 * @n: the data
 *
 * Return: the address of the node, or
 *	NULL if operation not successful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *current, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	current = *h;
	while ((current != NULL) && (i < idx))
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		if (i == idx)
			return (add_dnodeint_end(h, n));
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	prev = current->prev;
	prev->next = new;
	new->prev = prev;
	current->prev = new;
	new->next = current;
	return (new);
}
