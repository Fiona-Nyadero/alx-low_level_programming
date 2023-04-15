#include "main.h"
#include <stdio.h>

/**
 * main - Prints no of arguments
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
