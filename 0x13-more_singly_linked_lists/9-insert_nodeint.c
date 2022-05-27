#include "lists.h"

/**
 * listint_t *insert_nodeint_at_index - this function inserts
 * node at nth position
 * @head: points to linked list
 * @idx: the position to fix the node
 * @n: the data
 * Return: the newNode on success, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (NULL);

	if (idx <= i || temp == NULL || *head == NULL || newNode == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
