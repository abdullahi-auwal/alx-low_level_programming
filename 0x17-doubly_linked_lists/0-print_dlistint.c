#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: point to the first node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		i++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
