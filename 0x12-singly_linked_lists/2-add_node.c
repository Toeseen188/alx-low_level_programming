#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - fuction to add a new node to singly list
 * @head: pointer to the first node, param
 * @str: string param argument
 * Return: returns pointer to the first node(head)
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new)
	{
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	new->next = *head;
	*head = new;
	return (*head);
	free(new);
	}
	else
	return (NULL);
}
