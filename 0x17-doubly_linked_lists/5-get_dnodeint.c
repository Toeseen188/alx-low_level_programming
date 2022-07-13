#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - funct to get node at a given index
 * @head: head node
 * @index: index numb
 * Return: return null if fails, and head if success
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	i = 0;

	while (head != NULL)
	{
	if (i == index)
		break;
	head = head->next;
	i++;
	}
	return (head);
}
