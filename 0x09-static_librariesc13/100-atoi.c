#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int ct;
	int x;
	int f;
	int d;
	int n;
	int digit;

	n = 0;
	digit = 0;

	for (ct = 0; s[ct] != '\0'; ct++)

	x = 0;
	f = 0;
	d = 0;
	while (x < ct && f == 0)
	{
		if (s[x] == '-')
			++d;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);

	return (n);
}
