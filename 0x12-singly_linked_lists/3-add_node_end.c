#include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *tmp = *head;
	list_t *newnode = malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (!newnode)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (tmp == NULL)
        {
                *head = newnode;
        }
	else 
	{
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}
	return (*head);
}
