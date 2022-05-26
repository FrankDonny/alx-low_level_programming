#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node to the singly list
 * @head: this points to the structure
 * @n: integer
 * Return: NULL if failure, else head pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	/*unsigned int a = 0;*/

	temp = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (*head);
}
