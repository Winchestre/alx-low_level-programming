#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *tmp;
	listp_t *actv;

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
/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_node = 0;
	listp_t *sum, *new, *h_ptr;

	h_ptr = NULL;
	while (head)
	{
		new = malloc(sizeof(listp_t));

		if (!new)
			exit(98);
		new->p = (void *)head;
		new->next = h_ptr;
		h_ptr = new;
		add = h_ptr;

		while (add->next)
		{
			add = add->next;

			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h_ptr);
				return (n_node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_node++;
	}
	free_listp(&h_ptr);
	return (n_node);

}
