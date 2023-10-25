#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: linked list to look for
 *
 * Return: address of the node from where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *left = head;
	listint_t *right = head;

	if (!head)
		return (NULL);

	while (left && right && right->next)
	{
		right = right->next->next;
		left = left->next;
		if (right == left)
		{
			left = head;
			while (left != right)
			{
				left = left->next;
				right = right->next;
			}
			return (right);
		}
	}
	return (NULL);
}

