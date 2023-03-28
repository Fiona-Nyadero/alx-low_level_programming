#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string variable
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int x;
	int ct;
	char *a;
	char *z;
	char tmp;
	/* Get the string length i e ct */

	for (ct = 0; s[ct] != '\0'; ct++)

	/* Set a and z */

	a = s;
	z = s;

	/* Move z to the last character */

	for (x = 0; x < ct - 1; x++)
		z++;
	/* Swap char s from a and z */

	for (x = 0; x < ct / 2; x++)
	{
		tmp = *z;
		*z = *a;
		*a = tmp;
	/* Update a and z */
		a++;
		z--;
	}
}
