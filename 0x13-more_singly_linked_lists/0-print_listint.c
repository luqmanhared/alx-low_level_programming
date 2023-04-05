#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints ever element of a listint_t linked list.
 * @head: A pointer pointing to the head of the list.
 *
 * Return: Number of nodes inside the linked list.
 */
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		node_count++;
		printf("%d\n", head->n);
		head = head->next;
	}

	return (node_count);
}
