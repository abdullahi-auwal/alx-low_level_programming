#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: the index of the node to return
 *
 * Return: returns the address of the node,
 *	or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while ((current != NULL) && (i < index))
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
