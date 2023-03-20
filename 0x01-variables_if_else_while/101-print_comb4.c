#include <stdio.h>
/* Printing alphabet in lowercase then UPPERCASE */

/* betty style */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	for (y = 0; y < 10; y++)
	for (z = 0; z < 10; z++)
	{
		if (x != y && x < y && x != z)
		if (y != z && y < z)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');
			if (x < 7 && y <= 8 && z <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
