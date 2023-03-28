#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination array
 * @src: source array
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
