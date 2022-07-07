#include "lists.h"

/**
 * print_dlistint - this function prints the elements of a doubly linked list
 * @h: pointer to the linked list
 * Return: the number of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
