#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the address of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast, *temp;
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
                temp = fast;
                fast = fast->next;
                free(temp);
                count++;
            }
            while (fast->next != slow)
            {
                temp = fast;
                fast = fast->next;
                free(temp);
                count++;
            }
            free(fast);
            count++;

            *h = NULL;  /* Set the head to NULL */
            return count;
        }
    }

    while (*h != NULL)
    {
        temp = *h;
        *h = (*h)->next;
        free(temp);
        count++;
    }

    return count;
}

