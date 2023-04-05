#include "lists.h"

/**
 * add_nodeint_end - Append a new node to the listint_t list.
 * @head: Obtain address of head node of listint_t list as pointer.
 * @n: The integer value to be stored in the new node.
 * Return: If the function fails - NULL
 * Otherwise - Address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
