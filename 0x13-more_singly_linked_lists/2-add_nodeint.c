#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: pointer to the pointer of the first node
 * n: the int data of the node
 *
 * Return: The address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = next;
	return (new);
}
