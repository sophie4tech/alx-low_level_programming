#include "main.h"
#include <stdio.h>
/**
 * _puts - Function that prints a string, followed by a new line, to stdout.
 * @str: Type char pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	int x;
	int letter;

	for (x = 0; str[x] != 0; x++)
	{
		letter = str[x];
		_putchar(letter);
	}
	_putchar('\n');
}
