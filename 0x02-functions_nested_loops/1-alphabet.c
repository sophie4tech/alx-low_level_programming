#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: nothing on success
 */
void print_alphabet(void)
{
	int s = 97, e = 122;

	while (s <= e)
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
