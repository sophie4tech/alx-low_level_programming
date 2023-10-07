#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input
 * @needle: input
 * Return: haystack or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *ptt = needle;

		while (*ptt == *haystack && *ptt != '\0' && *haystack != '\0')
		{
			haystack++;
			ptt++;
		}
		if (*ptt == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
