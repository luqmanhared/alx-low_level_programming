#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the linked list.
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
