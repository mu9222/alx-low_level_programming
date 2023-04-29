#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list_t list.
 * @head: node.
 * @n: intiger number
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_el = malloc(sizeof(listint_t));
	listint_t *last_el = malloc(sizeof(listint_t));

	if (new_el == NULL)
		return (NULL);

	new_el->n = n;

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
