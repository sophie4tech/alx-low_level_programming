#include <stdio.h>

/**
 * main - this is the main entry
 *
 * Return: 0 success
 */

int main(void)
{
	int s = 97, e = 122;

	while (e >= s)
	{
		putchar(e);
		e--;
	}

	putchar('\n');

	return (0);
}
