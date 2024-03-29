#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the first node in the list link
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}

