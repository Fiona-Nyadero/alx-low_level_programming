#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints in STD_OUT
 * @filename: .txt file to read n' print
 * @letters: No. of letters to read n' print
 *
 * Return: 0 if open(r) fail or
 * if filename == NULL
 * 0 if write fail/no of bytes not expected
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cont;
	ssize_t fildes;
	ssize_t _printd;
	ssize_t _red;

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);

	cont = malloc(sizeof(char) * letters);
	_red = read(fildes, cont, letters);
	_printd = write(STDOUT_FILENO, cont, _red);

	free(cont);
	close(fildes);
	return (_printd);
}
