#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function to free listint_t and make head, NULL
 * @head: param
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *new, *temp;

	if (head == NULL)
	return;

	new = *head;
	if (new != NULL)
	{
	temp = new;
	new = new->next;
	free(temp);
	}
	*head = NULL;
}
