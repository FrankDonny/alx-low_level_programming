#include "lists.h"

/**
 * free_dlistint - this function frees a dlistint_t list
 * @head: pointer to the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	if (head != NULL)
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp);
	}
}
