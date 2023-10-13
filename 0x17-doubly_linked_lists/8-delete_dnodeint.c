#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t linked list
 * @head: Head of the list
 * @index: Index of the node to delete
 *
 * Return: On success, 1 On failure, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *current, *tmp;
	dlistint_t *prev_node, *next_node;

	if (!head || !*head)
		return (-1);
	for (i = 0; *head; head = &(*head)->next, i++)
	{
		if (i == index)
		{
			current = *head;
			tmp = (*head)->next;
			prev_node = current->prev;
			next_node = current->next;
			if (prev_node)
				prev_node->next = next_node;
			if (next_node)
				next_node->prev = prev_node;
			free(current);
			*head = tmp;
			return (1);
		}
	}
	return (-1);
}
