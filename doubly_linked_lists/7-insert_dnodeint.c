#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list
 * @h: Double pointer to the head of the list
 * @idx: The index where the new node should be added, starting from 0
 * @n: The integer value to be added to the new node
 *
 * Return: The address of the new node, or NULL if failed or not possible
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL)
	{
		if (idx > 0)
		{
			free(new_node);
			return (NULL);
		}
		*h = new_node;
	}
	else if (idx == 0)
	{
		new_node->next = *h
		(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		dlistint_t *current = *h;
		unsigned int current_index = 0;

		while (current != NULL && current_index < idx - 1)
		{
			current = current->next;
			current_index++;
		}

		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = current->next;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
		new_node->prev = current;
	}

	return new_node;
}
