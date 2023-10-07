#include "main.h"

/**
 * _strncpy - Copy string from src to dest
 * @dest: where string will be stored
 * @src: original string
 * @n: number of chars to copy
 *
 * Return:  pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dest[a] = src[b];

		if (src[a] == '\0')
		{
			dest[b] = '\0';
			break;
		}
		a++;
		b++;
	}
	while (b != n)
		dest[b++] = '\0';

	return (dest);
}
