#include "lists.h"

/**
 * add_dnodeint - inserts a new node into a linked list
 * @head: pointer to the linked lists
 * @n: data of the new node
 * Return: newNode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	temp = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	if (temp != NULL)
	{
		temp->prev = newNode;
	}
	newNode->next = temp;
	temp = newNode;
	return (newNode);
}
