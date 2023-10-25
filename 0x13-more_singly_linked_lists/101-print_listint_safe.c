#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the first node of linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_n = NULL;
	const listint_t *ini_n = NULL;
	size_t idx = 0;
	size_t new_n;

	temp_n = head;
	while (temp_n)
	{
		printf("[%p] %d\n", (void *)temp_n, temp_n->n);
		idx++;
		temp_n = temp_n->next;
		ini_n = head;
		new_n = 0;
		while (new_n < idx)
		{
			if (temp_n == ini_n)
			{
			printf("->[%p] %d\n", (void *)temp_n, temp_n->n);
			return (idx);
			}
			ini_n = ini_n->next;
			new_n++;
		}
		if (!head)
			exit(1);
	}
	return (idx);
}
