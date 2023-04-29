#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: node.
 * @str: string needs to be duplicated.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_el = malloc(sizeof(list_t));
	list_t *last_el = malloc(sizeof(list_t));

	if (new_el == NULL)
		return (NULL);

	new_el->str = strdup(str);
	new_el->len = strlen(str);

	if (*head == NULL)
		*head = new_el;
	else
	{
		last_el = *head;

		while (last_el->next != NULL)
			last_el = last_el->next;
		last_el->next = new_el;
	}
	return (new_el);
}
