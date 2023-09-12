#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase x10
 *
 * Return: nothin on success
 */
void print_alphabet_x10(void)
{
	int s = 97, e = 122, count = 1;

	while (count <= 10)
	{
		while (s <= e)
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		s = 97;
		count++;
	}
}
