#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: node.
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
