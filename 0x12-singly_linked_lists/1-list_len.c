#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: numbers of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return(n);
}
