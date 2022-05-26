#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add  ode to list
 * @head: pointer, param
 * @n: data, param
 * *Return: returns head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
	new->n = n;
	new->next = NULL;
	new->next = *head;
	*head = new;
	}
	else
	return (NULL);

	return (*head);
	free(new);
}
