#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: Head of the linked list
 * Return: 0 if empty, else return n
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return(0);

	current = *head;
	n = current->n;
	*head = current->next;
	free(current);

	return (n);
}
