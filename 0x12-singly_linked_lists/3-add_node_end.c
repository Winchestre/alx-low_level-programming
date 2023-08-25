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
	size_t nchar;

	nchar = 0;
	while (str[nchar])
		nchar++;

	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = nchar;
	nnode->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
			tmp->next = nnode;
		}
	}
	return (nnode);
}
