#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: s or null, if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
