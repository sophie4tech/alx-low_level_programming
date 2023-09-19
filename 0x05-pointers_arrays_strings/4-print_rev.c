#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		r++;
	}
	for (i = r - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
