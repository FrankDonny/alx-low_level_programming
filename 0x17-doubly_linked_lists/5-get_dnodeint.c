#include "lists.h"


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned count = 0;

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
