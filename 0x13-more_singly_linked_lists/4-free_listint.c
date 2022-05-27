#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free head, head->next
 * @head: param input
 * Return: void
*/
void free_listint(listint_t *head)
{
	if (head)
	{
	free_listint(head->next);
	free(head);
	}
}
