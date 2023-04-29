#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: node.
 * @n: integer number
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_el = malloc(sizeof(listint_t));

	if (new_el == NULL)
		return (NULL);

	new_el->n = n;
	new_el->next = *head;
	*head = new_el;

	return (new_el);
}
