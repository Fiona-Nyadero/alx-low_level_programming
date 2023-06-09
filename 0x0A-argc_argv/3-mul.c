#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector(array)
 *
 * Return: If successful 0
 * otherwise 1
 */

int main(int argc, char *argv[])
{
	int y = 0;
	int z = 0;

	if (argc == 3)
	{
		y = atoi(argv[1]);
		z = atoi(argv[2]);

		printf("%d\n", (y * z));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
