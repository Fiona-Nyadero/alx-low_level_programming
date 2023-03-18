#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there *
 /*
  * main - main function
  * No Description:
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf( int n, "%d is positive\n");
	}
	else if (n == 0)
	{
		printf( int n, "%d is zero\n");
	}
	else
	{
		printf( int n, "%d is negative\n");
	}
	return (0);
}
