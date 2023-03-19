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
	char x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
