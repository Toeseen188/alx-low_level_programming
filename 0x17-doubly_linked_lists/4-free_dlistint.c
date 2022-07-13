#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function to free memory head
 * @head: head node
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;


	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

