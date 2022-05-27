#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function to add node to the end of the list
 * @head: node param
 * @n: param input int
 * Return: new
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new)
	{
	new->n = n;
	new->next = NULL;

	if (temp != NULL)
	{
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = new;
	}
	else
	*head = new;
	}
	else
	return (NULL);

	return (new);
	free(new);
}
