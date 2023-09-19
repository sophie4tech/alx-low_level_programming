#include "main.h"
#include <stdio.h>

/**
 * puts_half - print second hald of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (i > (length - 1) / 2)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
