#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *actv;

	if (*head == NULL)
		return (0);

	actv = *head;
	h_node = actv->n;
	h = actv->next;
	free(actv);
	*head = h;

	return (h_node);
}
