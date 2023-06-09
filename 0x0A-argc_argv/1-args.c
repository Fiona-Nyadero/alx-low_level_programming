#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: argument count
 * @argv: argument vector(array)
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void) argv;

	return (0);
}
