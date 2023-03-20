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

	for (x = 0; x < 10; x++)
	for (y = 0; y < 10; y++)
	{
		if (x != y && x < y)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x < 8 && y <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
