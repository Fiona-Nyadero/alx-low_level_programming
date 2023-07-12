#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of filename
 * @filename: file to append to
 * @text_content: \0 str to write in filename
 *
 * Return: 1 if success or if file exists,
 * -1 if fail i.e if file not created
 * or cannot be written/ write fails
 * or if file !exist, !write permission
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fildes;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fildes = fopen(filename, "a");

		if (fildes == NULL)
		{
			return (-1);
		}

		fclose(fildes);
		return (1);
	}

	fildes = fopen(filename, "a");

	if (fildes == NULL)
	{
		return (-1);
	}

	fprintf(fildes, "%s", text_content);
	fclose(fildes);

	return (1);
}
