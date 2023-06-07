#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
