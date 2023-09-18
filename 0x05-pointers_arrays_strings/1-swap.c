#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swaps the values of two integers
 * @a: declaration of a and paramters for the function swap_int
 * @b: declaration of b and paramters for the function swap_int
 *
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
