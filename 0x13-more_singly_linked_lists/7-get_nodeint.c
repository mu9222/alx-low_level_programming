#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list.
 * @head: point to list
 * @index: index of node
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);

		n++;
		head = head->next;
	}
	return (NULL);
}
