#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int byt, list;
	int (*ad)(int, char **) = main;
	unsigned char opcd;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (list = 0; list < byt; list++)
	{
		opcd = *(unsigned char *)ad;
		printf("%.2x", opcd);

		if (list == byt - 1)
			continue;
		printf(" ");

		ad++;
	}

	printf("\n");
	return (0);
}
