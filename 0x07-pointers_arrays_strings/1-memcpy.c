#include "main.h"

/**
 * _memcpy - function that copies memoy area
 * @dest: memory area
 * @src: memory area
 * @n: byte to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
