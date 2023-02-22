#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = '90'; i <= '125'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
