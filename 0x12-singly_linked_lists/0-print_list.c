#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
	}

	return (count);
}
