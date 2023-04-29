#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the nth node of a list.
 * @head: point to list
 * Return: sum of elements of list
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
