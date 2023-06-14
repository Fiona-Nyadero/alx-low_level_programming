#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints min no of coins for change
 * @argc: argument count(number)
 * @argv: argument vector(array)
 *
 * Return: 1 if error(argcount != 1)
 * or 0 if successful
 */

int main(int argc, char *argv[])
{
	int xcen, xcon = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	xcen = atoi(argv[1]);

	while (xcen > 0)
	{
		xcon++;
		if ((xcen - 25) >= 0)
		{
			xcen -= 25;
			continue;
		}
		if ((xcen - 10) >= 0)
		{
			xcen -= 10;
			continue;
		}
		if ((xcen - 5) >= 0)
		{
			xcen -= 5;
			continue;
		}
		if ((xcen - 2) >= 0)
		{
			xcen -= 2;
			continue;
		}
		xcen--;
	}

	printf("%d\n", xcon);

	return (0);
}
