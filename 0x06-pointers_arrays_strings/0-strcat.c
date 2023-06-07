#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination array
 * @src: source array
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_ct = 0;
	int src_ct = 0;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
		dest_ct;

	for (x = 0; src[x] != '\0'; x++)
		src_ct;

	for (x = 0; x <= src_ct; x++)
		dest[dest_ct + x] = src[x];

	dest[x] = '\0';

	return (dest);
}
