#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_recursive - Recursively frees a listint_t
 * list.
 * @head: Pointer to the head of the list.
 */
void free_listint_recursive(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint_recursive(head->next);
	free(head);
}

/**
 * free_listint2 - Frees a listint_t list and sets the
 * head to NULL.
 * @head: Pointer to the address of the head of the list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint_recursive(*head);
	*head = NULL;
}
