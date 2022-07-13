#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node to the end of the list
 * @head: head of the node
 * @n: node int to be added
 * Return: returns new if success, NULL if fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}
	new->prev = h;

	if (h != NULL)
		h->next = new;
	*head = new;
	return (new);
}
