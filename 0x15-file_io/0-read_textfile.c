#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints in STD_OUT
 * @filename: .txt file to read & print
 * @letters: No. of letters to read & print
 *
 * Return: 0 if open(r) fails or
 * if filename == NULL
 * 0 if write fails/not expected no. of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cont;
	ssize_t fildes;
	ssize_t _print;
	ssize_t _read;

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);

	cont = malloc(sizeof(char) * letters);
	_read = read(fildes, cont, letters);
	_print = write(STDOUT_FILENO, cont, _read);

	free(cont);
	close(fildes);
	return (_print);
}
