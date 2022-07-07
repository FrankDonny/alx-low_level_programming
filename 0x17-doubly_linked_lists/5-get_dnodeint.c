#include "lists.h"

/**
 * get_dnodeint_at_index - add node at a given index
 * @head: pointer to the linked list
 * @index: the position to fix the newnode
 * Return: return the address of the head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
