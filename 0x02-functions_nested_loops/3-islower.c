#include "main.h"

/**
 * _islower - check whether the character is lower
 *
 * @c: character to be tested
 *
 * Return: 1 if @c is lower else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
