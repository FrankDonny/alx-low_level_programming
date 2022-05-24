#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *s = malloc(sizeof (list_t));
	
	while (str[len])
		len++;

	if (!s)
		return (NULL);
	s->str = strdup(str);
	s->len = len;
	s->next = *head;
	*head = s;

	return (*head);
}
