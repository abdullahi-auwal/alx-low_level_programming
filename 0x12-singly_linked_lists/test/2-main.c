#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");

	print_list(head);
	return (0);
}
