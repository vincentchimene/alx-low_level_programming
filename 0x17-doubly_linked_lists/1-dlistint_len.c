#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - writes the number of elements
 * @h: head of doubly list
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

