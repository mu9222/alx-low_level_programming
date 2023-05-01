#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that adds a new node at the beginning of a list.
 * @head: node.
 * Return: the address of the first element.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_el = NULL;
	listint_t *prev_el = NULL;

	while (*head)
	{
		next_el = (*head)->next;
		(*head)->next = prev_el;
		prev_el = *head;
		*head = next_el;
	}
	*head = prev_el;
	return (*head);
}
