#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node at the beginning of a linked list
 * @head: pointer to the pointer of the first node
 * @str: pointer to the str
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
