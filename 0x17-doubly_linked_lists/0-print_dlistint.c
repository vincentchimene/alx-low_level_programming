#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print elements for list
 * @h: head of list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number;

	number = 0;

	if (h == NULL)
	{
		return (number);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
