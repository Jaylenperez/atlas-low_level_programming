#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head of list to free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);

		current = next;
	}
}
