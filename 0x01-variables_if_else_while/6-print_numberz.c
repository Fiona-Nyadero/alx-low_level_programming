#include <stdio.h>
/* Printing all single digit numbers with putchar */

/* betty style */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
