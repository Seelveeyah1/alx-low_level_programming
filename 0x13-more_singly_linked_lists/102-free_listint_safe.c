#include <stdlib.h>
#include "lists.h"

/**
 * free_nodes - Frees a range of nodes from slow to fast.
 * @start: Starting node to be freed.
 * @end: Ending node (inclusive) to be freed.
 *
 * Return: Number of nodes freed.
 */
size_t free_nodes(listint_t *start, listint_t *end)
{
	size_t count = 0;
	listint_t *temp;

	while (start != end)
	{
		temp = start;
		start = start->next;
		free(temp);
		count++;
	}

	free(end);
	count++;

	return (count);
}

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the address of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast;
	size_t count = 0;

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

	if (slow == fast)  /* Detect a loop */
	{
		slow = *h;
		while (slow != fast)
		{
			fast = fast->next;
		}
		count += free_nodes(*h, fast);

		*h = NULL;  /* Set the head to NULL */
		return (count);
	}
	}

	count += free_nodes(*h, NULL);
	*h = NULL;  /* Set the head to NULL */

	return (count);
}
