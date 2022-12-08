#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tempNode = NULL, *newNode = NULL;

	if (head == NULL)
	return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;

	tempNode = *head;
	*head = newNode;
	newNode->next = tempNode;

	if (tempNode != NULL)
		tempNode->prev = *head;

	return (newNode);
}
