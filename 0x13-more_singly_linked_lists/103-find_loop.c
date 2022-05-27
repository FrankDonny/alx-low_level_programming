#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *two_paces, one_pace;
	one_pace = head->next;
	two_paces = head->next->next;
	unsigned int i = 0;


	while (one_pace && two_pace && two_pace->next)
	{
		if (one_pace == two_pace)
			return (&head);
		return (NULL);
		i++;
	}
}
