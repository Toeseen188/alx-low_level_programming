#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function to add new node to doubly linked list
 * @head: the head of the linked list
 * @n: int node to be added
 * Return: returns NULL if new node is null or new if not
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
