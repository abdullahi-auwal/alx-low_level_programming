#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_t - frees a linked list
 * @head: pointer to the first node
 */
void free_listint_t(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
