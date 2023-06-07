#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 1 if error
 * else always 0
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
