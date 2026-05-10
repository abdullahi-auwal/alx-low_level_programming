#include "lists.h"

/**
 * listint_len - returns number of nodes in a linked list
 * @h: pointer to the first node
 *
 * Return: returns the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
