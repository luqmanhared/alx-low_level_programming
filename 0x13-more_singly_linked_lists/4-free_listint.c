#include "lists.h"

/**
 * free_listint_t: That which frees listint_t.
 * @head: In the head of the listint_t list pointer will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		free(head);
		head = tmp :
		tmp = head->next;
	}
}
