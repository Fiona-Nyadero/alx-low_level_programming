#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	f = n % 10;
	if (f > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, f);
	else if (f == 0)
		printf("Last digit of %d is %d and is 0\n", n, f);
	else if (f < 6 && f != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f);
	return (0);
}
