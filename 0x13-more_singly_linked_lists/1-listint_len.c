#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a list.
 * @h: point to list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
