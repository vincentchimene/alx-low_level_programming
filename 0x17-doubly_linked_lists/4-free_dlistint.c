#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of node
 * Return: free'd list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempNode = NULL;

	while (head != NULL)
	{
		tempNode = head->next;
		free(head);
		head = tempNode;
	}
}
