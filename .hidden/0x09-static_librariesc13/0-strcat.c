#include "main.h"
#include <stdio.h>

/**
 * _strcat - cats two strings
 * @dest: destinaton string
 * @src: source string
 *
 * Return: pointer to new strinug
 */

char *_strcat(char *dest, char *src)
{
	int dct = 0, x;

	while (dext[dct])
	{
		dct++;
	}

	for (x = 0; src[x] != 0; x++)
	{
		dest[dct] = src[x];
		dct++;
	}

	dest[dct] = '\0';

	return (dest);
}
