#include "lists.h"

/**
 * add_node - this fucntion adds a new node
 * @head: this is a double pointer that points to list_t
 * @str: the string to be copied
 * Return: NULL if there is no new string, return pointer head otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *s = malloc(sizeof(list_t));

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
