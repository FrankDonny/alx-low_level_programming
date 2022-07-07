#include "lists.h"

/**
 * sum_dlistint - this function sums all data of nodes
 * @head: pointer to the linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head->next == NULL)
		return (0);

	while (head->next != NULL)
	{
		head = head->next;
		sum += (*head).n;
	}
	return (sum);
}
