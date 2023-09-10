#include <stdio.h>

/**
 * main - this is the main entry
 *
 * Return: 0 success
 */

int main(void)
{
	int s = 0, e = 9;

	while (s <= e)
	{
		putchar(s + '0');
			s++;
	}

	putchar('\n');

	return (0);
}
