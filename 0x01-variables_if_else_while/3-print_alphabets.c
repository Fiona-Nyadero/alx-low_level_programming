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
	char y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
