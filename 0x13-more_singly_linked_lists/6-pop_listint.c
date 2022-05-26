#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp, *node;

	if ((*head)->next == 0)
		return (0);

	temp = *head;
	while (temp->next != 0)
	{
		node = temp;
		temp = temp->next;
	}

	if ((*head)->next == 0)
		return (0);
	else
		node->next = 0;
	free(temp);

	return((*head)->n);
}
