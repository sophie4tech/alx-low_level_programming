#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z = 1;
			}
		}
		y = 0;
		if (z == 0)
			break;
		str++;
		x++;
	}
	return (x);
}
