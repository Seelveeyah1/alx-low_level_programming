#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * create_node - Creates a new list node.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it
 * failed.
 */
list_t *create_node(const char *str)
{
	list_t *new_node;
	char *str_copy;
	size_t str_len;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);
	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t
 * list.
 * @head: Pointer to the address of the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element (node), or NULL
 * if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = create_node(str);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
