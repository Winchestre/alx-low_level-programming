#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *actv;

	if (head)
	{
		actv = *head;
		while ((tmp = actv) != NULL)
		{
			actv = actv->next;
			free(tmp);
		}
		*head = NULL;
	}
}
