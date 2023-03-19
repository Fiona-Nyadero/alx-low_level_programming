#include <stdio.h>
/* Printing alphabet in lowercase */

/* betty style */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar("\n");
	return (0);
}
