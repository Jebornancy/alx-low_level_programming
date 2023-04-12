#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees memory of each node
 * @head: pointer to the head node of the list
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *last;

	while (*head != NULL)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
	}

	*head = NULL;
}
