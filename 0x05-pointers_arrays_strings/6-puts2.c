#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: string to pass to function
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
