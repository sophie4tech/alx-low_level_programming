#include "main.h"
#include <stdio.h>

/**
 * print_array - Print the n elements of an array
 * @a: the array
 * @n: element number to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
