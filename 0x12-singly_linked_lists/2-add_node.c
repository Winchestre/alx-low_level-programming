#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = len;
	nnode->next = (*head);
	(*head) = nnode;

	return (*head);
}
