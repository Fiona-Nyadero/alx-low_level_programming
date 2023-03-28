#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: the array to print
 * @n: the number of elements of the array
 *
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
