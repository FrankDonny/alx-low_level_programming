#include "lists.h"

/**
 * list_len - produces the number of elements in list_t
 * @h: points to the list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
		_putchar(a);
	h = h->next;
	return (a);
}
