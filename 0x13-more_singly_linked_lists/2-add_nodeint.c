#include "lists.h"

/**
 * add_nodeint - Insert a new node at the start of the listint_t list.
 * @head: Obtain pointer to address of head node in listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - Return memory address of newly inserted element in list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
