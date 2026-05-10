#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: the index of the node
 *
 * Return: NULL if the node doesn't exist
 *	address of the nde if it exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while ((head != NULL) && (i < index))
	{
		head = head->next;
		i++;
	}
	if ((i < index) || (head == NULL))
		return (NULL);
	return (head);
}
