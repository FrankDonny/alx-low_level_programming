#include "lists.h"

/**
 * sum_dlistint - this function sums all data of nodes
 * @head: pointer to the linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			head = head->next;
			sum += (*head).n;
		}
	}
	return (sum);
}
