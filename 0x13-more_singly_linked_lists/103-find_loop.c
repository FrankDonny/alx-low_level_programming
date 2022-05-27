#include "lists.h"

/**
 * find_listint_loop - find the loop the in an linked list
 * @head: this point to the linked list
 * Return: just return
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *single_pace, *double_pace, *temp;

	temp = head;
	single_pace = single_pace->next;
	double_pace = double_pace->next-next;

	while (single_pace && double_pace && double_pace-next)
	{
		if (single_pace != double_pace)
			return (NULL);
		temp = temp->next;
	}
	return (temp->next);
}
