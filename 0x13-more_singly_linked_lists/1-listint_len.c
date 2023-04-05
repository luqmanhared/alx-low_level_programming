#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Get the length of a linked listint_t list.
 * @head: Point to the head node of the listint_t list..
 *
 * Return: Return the total count of elements in the listint_t list.
 */
size_t listint_len(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		node_count++;
		head = head->next;
	}

	return (node_count);
}
