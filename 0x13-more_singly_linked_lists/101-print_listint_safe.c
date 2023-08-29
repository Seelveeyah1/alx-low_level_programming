#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	int visited[10000] = {0};

	while (current != NULL);
	{
	if (visited[(size_t)current])
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		exit(98);
	}

	printf("[%p] %d\n", (void *)current, current->n);
	visited[(size_t)current] = 1;
	count++;
	current = current->next;
	}

	return (count);
}
