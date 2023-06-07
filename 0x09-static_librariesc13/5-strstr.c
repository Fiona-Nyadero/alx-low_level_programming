#include "main.h"
#include "stdio.h"

/**
 * _strstr -finds first occurrence of the substring
 * @needle: substring
 * @haystack: string to search
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (NULL);
}
