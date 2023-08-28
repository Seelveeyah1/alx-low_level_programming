#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t list.
 * @head: Pointer to the address of the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		prev = temp;
		temp = temp->next;
	}

	return (-1);
}
