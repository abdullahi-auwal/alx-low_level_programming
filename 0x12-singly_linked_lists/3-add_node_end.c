#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the pointer to the last node
 * @str: pointer to the string data
 *
 * Return: the address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *first;
	int i;

	first = *head;
	if (*head != NULL)
		while ((*head)->next != NULL)
			*head = (*head)->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	(*head)->next = new;
	new->next = NULL;
	*head = first;
	return (new);
}
