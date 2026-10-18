#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - returns number of the elements of a dlistint_t list
 * @h: point to the first node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
