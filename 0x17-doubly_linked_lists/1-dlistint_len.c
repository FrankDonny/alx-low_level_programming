#include "lists.h"

/**
 * dlistint_len - this function returns the number of elements in a doubly linked list
 * @h: pointer to the linked list
 * Return: the number of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	while (h != NULL){
		count++;
		h = h->next;
	}
	return (count);
}
