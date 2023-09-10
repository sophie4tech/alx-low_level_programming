#include <stdio.h>

/**
 * main - this is the main entry
 *
 * Return: 0 success
 */

int main(void)
{
	int s = 97, e = 122;

	while (s <= e)
	{
		if (s != 'q' && s != 'e')
			putchar(s);
		s++;
	}

	putchar('\n');

	return (0);
}
