#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a nth position
 * @head: point to list
 * @idx: index of node
 * @n: value of node
 * Return: pointer to node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr = *head;
	unsigned int num = 0;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (curr && num < idx)
	{
		if (num == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
			curr = curr->next;
		num++;
	}
	return (NULL);
}
