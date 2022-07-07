#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - this function inserts a new node at a given position
 * @h: pointer to the linked list
 * @idx: index to insert the newNode
 * @n: data of the newNode
 * Return: newNode or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *next, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *h;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = newNode;
		newNode->prev = NULL;
	}
	else
	{
		newNode->prev = temp;
		next = temp->next;
		temp->next = newNode;
	}
	newNode->next = next;

	if (newNode->next != NULL)
		newNode->next->prev = newNode;

	return (newNode);
}
