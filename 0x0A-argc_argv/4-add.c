#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - adds all +ve numbers
 * @argc: argument count
 * @argv: argument vector(array)
 *
 * Return: If successful 0
 * otherwise 1
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int y, addition = 0;
	char *z;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			z = argv[x];
			for (y = 0; y < strlen(z); y++)
			{
				if (z[y] < 48 || z[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			addition += atoi(z);
			z++;
		}
		printf("%d\n", addition);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
