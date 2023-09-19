#include "main.h"
#include <stdio.h>

/**
 * rev_string -  function that reverses a string
 * @s: string to be reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
int i, length = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i <= (length - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
