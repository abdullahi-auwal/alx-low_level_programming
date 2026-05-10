#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_t - frees a linked list
 * @head: pointer to the first node
 */
void free_listint_t(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
