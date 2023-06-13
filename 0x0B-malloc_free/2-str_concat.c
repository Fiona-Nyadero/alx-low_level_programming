#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cats strings A n' B
 * @s1: string A
 * @s2: string B
 *
 * Return: NULL if s1 or s2 is NULL
 * else pointer to the new A-then-B combo
 * or NULL if fx fails
 */

char *str_concat(char *s1, char *s2)
{
	int y = 0, z = 0, v = 0, a = 0;
	char *combo;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[y])
		y++;

	while (s2[z])/*Det length of string s1 &s2*/
		z++;

	v = y + z;

	combo = malloc((v + 1) * sizeof(char)); /*Use length 2get size*/

	if (combo == NULL)/*If malloc fails*/
		return (NULL);

	z = 0;

	while (a < v)/*combines the two strings*/
	{
		if (a <= y)
			combo[a] = s1[a];

		if (a >= y)
		{
			combo[a] = s2[z];
			z++;
		}
		a++;
	}

	combo[a] = '\0'; /*Add terminator ;-)*/

	return (combo);
}
