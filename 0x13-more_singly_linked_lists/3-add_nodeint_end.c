#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the pointer of the first node
 * @n: the integer data
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while ((current != NULL) && (current->next != NULL))
		current = current->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	current->next = new;
	return (new);
}
