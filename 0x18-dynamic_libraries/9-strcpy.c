#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Function that copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

