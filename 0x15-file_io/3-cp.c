#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFF_SZ 1024

/**
 * close_filedes - closes fildes
 * @fildescr: file descriptor
 *
 * Return: always 0
 */

void close_fildes(int fildescr)
{
	int cls;

	cls = close(fildescr);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildescr);
		exit(100);
	}
}

/**
 * def_contain - creates a buffer of size BUFF_SZ
 * @file: file loaded in created buffer
 *
 * Return: Pointer to new buffer
 */

char *def_contain(char *file)
{
	char *contain;

	contain = malloc(sizeof(char) * BUFF_SZ);
	if (contain == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (contain);
}

/**
 * main - Copies the contents of file uno to file dos
 * @ac: arguments' count
 * @av: array of pointers to argument
 *
 * Return: 0 on success OR
 * If ac is incorrect - exit code 97 ERROR msg\n
 * If file_from !exist or !read - exit code 98 ERROR msg\n
 * If file_to !create or !write - exit code 99 ERROR msg\n
 * If file_to || file_from !closed - exit code 100 ERROR msg\n
 */

int main(int ac, char *av[])
{
	int rescopy4, respaste2, _red, _printd;
	char *contain;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	contain = def_contain(av[2]);
	rescopy4 = open(av[1], O_RDONLY);
	_red = read(rescopy4, contain, BUFF_SZ);
	respaste2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (rescopy4 == -1 || _red == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(contain);
			exit(98);
		}

		_printd = write(respaste2, contain, _red);
		if (respaste2 == -1 || _printd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(contain);
			exit(99);
		}

		_red = read(rescopy4, contain, BUFF_SZ);

		respaste2 = open(av[2], O_WRONLY | O_APPEND);
	} while (_red > 0);

	free(contain);
	close_fildes(rescopy4);
	close_fildes(respaste2);
	return (0);
}
