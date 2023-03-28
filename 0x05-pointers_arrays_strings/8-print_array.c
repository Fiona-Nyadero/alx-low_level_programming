#include "main.h"
#include "stdio.h"

/**
 * print_array - prints every other character of a string
 * @a: an array of integers
 * @n: number of elements to print
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
