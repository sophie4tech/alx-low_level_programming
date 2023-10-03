#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @c: character to locate
 * @s: string with the character
 * Return: s
 * NULL, if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
			return (NULL);
}
