#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: heaf of a list
 * Return: Address of node at start of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *k;
	listint_t *prev;

	k = head;
	prev = head;
	while (head && k && k->next)
	{
		head = head->next;
		k = k->next->next;

		if (head == k)
		{
			head = prev;
			prev = k;
			while (1)
			{
				k = prev;
				while (k->next != head && k->next != prev)
				{
					k = k->next;
				}
				if (k->next == head)
					break;

				head = head->next;
			}
			return (k->next);
		}
	}
	return (NULL);
}
