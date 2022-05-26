#include "lists.h"

/**
 * free_listint2 - function to free listint_t memory allocation
 * @head: pointer to listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node = *head;

	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
		*head = temp;
	}

	if (*head == temp)
		*head = NULL;
}
