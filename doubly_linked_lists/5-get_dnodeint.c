#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * @head: pointer to head
 * @index: index of the node, starting at 0
 * Return: If the node exists, the address of the located node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
			return (head);

		head = head->next;
		current_index++;
	}

	return (NULL);
}
