#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string from src to dest
 * @dest: where string will be stored
 * @src: original string
 *
 * Return:  pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
