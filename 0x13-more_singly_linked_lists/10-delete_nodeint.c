#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list.
 * @head: node.
 * @index: index of a list
 * Return: returns the head node’s data (n).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *curr = NULL;
	unsigned int n = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	temp = *head;
	while (n < (index - 1))
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		n++;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (1);
}
