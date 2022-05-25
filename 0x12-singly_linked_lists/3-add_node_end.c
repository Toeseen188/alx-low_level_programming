#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function to add node to the end of a singly list
 * @head: param
 * @str: param
 * Return: returns new;
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new)
	{
	new->str = strdup(str);
	new->len = strlen(str);
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
	{
	return (NULL);
	}
	return (new);
	free(new);
}
