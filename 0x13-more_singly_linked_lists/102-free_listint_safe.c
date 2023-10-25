#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in linked list
 *
 * Return: number of elements in the feed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int different;
	listint_t *tem_ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		different = *h - (*h)->next;
		if (different > 0)
		{
			tem_ptr = (*h)->next;
			free(*h);
			*h = tem_ptr;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
