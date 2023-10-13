#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	
	while (h)
	{
		length++;
		h = h->next;
	}
	
	return (length);
}
