#include <stdio.h>
/* Printing alphabet in lowercase except e and q */

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
		if (x != 'e' && x != 'q')
		putchar(x);
	putchar('\n');
	return (0);
}
