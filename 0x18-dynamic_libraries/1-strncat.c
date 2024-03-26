#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: type char str
 * @src: type char str
 * @n: number of elements to concatenate in
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
