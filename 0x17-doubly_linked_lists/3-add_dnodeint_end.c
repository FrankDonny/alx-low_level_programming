#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node at the end
 * of a dlistint_t list
 * @head: pointer to the list
 * @n: data of the newNode
 * Return: newNode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	newNode->prev = temp;

	return (newNode);
}
