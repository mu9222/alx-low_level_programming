#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: node.
 * @str: string needs to be duplicated.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_el = malloc(sizeof(list_t));

	new_el->str = strdup(str);
	new_el->len = strlen(str);
	new_el->next = *head;
	*head = new_el;

	return (new_el);
}
