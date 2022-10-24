#include "lists.h"

/**
 * listint_len - prints all the elements of a linked list
 * @h: a node of type listint_t to print
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
