#include "main.h"

/**
 * _islower - function to check for lowercase character
 *
 * @c: parameter to be printed
 *
 * Return: 1 if lowercase and
 * ad 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
