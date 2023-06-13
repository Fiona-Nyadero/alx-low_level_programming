#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new duplicate
 * @str: string to duplicate
 *
 * Return: NULL if str is NULL
 * else pointer to the duplicate string
 * or NULL if malloc fails/insufficient
 */

char *_strdup(char *str)
{
	int y = 0;
	int z = 1;
	char *dupe;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[z]) /*Det length of string str*/
		z++;

	dupe = malloc((z + 1) * sizeof(char)); /*Use length 2get size*/

	if (dupe == NULL)/*If malloc fails*/
	{
		return (NULL);
	}

	while (y < z)/*copy string*/
	{
		dupe[y] = str[y];
		y++;
	}

	dupe[y] = '\0'; /*Add terminator ;-)*/

	return (dupe);
}
