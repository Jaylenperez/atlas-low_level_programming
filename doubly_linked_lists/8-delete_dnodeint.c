#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at a given index in a linked list
 * @head: Double pointer to the head of the list
 * @index: The index of the node to be deleted, starting from 0
 *
 Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int current_index;

	if (*head == NULL)
		return (-1);

	current = *head;
	current_index = 0;
	
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);

	return (1);
}
