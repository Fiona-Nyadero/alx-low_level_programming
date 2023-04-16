#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints min no of coins change
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 1 if error
 * else always 0
 */

int main(int argc, char *argv[])
{
	int xcent, ycoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	xcent = atoi(argv[1]);

	while (xcent > 0)
	{
		ycoin++;
		if ((xcent - 25) >= 0)
		{
			xcent -= 25;
			continue;
		}
		if ((xcent - 10) >= 0)
		{
			xcent -= 10;
			continue;
		}
		if ((xcent - 5) >= 0)
		{
			xcent -= 5;
			continue;
		}
		if ((xcent - 2) >= 0)
		{
			xcent -= 2;
			continue;
		}
		xcent--;
	}

	printf("%d\n", ycoin);

	return (0);
}
