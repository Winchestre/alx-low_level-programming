#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list.
 * @head: head of linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *tmp;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;

	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = len;
	nnode->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = nnode;

	return (nnode);
}
