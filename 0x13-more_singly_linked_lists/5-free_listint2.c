#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	while ((*head) != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
