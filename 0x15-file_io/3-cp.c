#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFF_SZ 1024

/**
 * close_file - closes fildes
 * @fildes: file descriptor
 *
 * Return: always 0
 */

void close_file(int fildes)
{
	int cls;

	cls = close(fildes);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
}

/**
 * def_cont - creates a buffer of size BUFF_SZ
 * @file: file loaded in created buffer
 *
 * Return: Pointer to new buffer
 */

char *def_cont(char *file)
{
	char *cont;

	cont = malloc(sizeof(char) * BUFF_SZ);
	if (cont == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (cont);
}

/**
 * main - Copies the contents of a file to another file.
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
	int rescopy4, respaste2, _read, _print;
	char *cont;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cont = def_cont(av[2]);
	rescopy4 = open(av[1], O_RDONLY);
	_read = read(rescopy4, cont, BUFF_SZ);
	respaste2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (rescopy4 == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(cont);
			exit(98);
		}

		_print = write(respaste2, cont, _read);
		if (respaste2 == -1 || _print == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(cont);
			exit(99);
		}

		_read = read(rescopy4, cont, BUFF_SZ);

		respaste2 = open(av[2], O_WRONLY | O_APPEND);
	} while (_read > 0);

	free(cont);
	close_file(rescopy4);
	close_file(respaste2);
	return (0);
}
