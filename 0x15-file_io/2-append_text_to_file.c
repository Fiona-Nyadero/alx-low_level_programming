#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of filename
 * @filename: file to app to
 * @text_content: \0-term str to write in filename
 *
 * Return: 1 if success or if file exists,
 * -1 if fail meaning file not created
 * or cannot be written/ write fails
 * or if file !exist, !write permission
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fildescr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fildescr = fopen(filename, "a");

		if (fildescr == NULL)
		{
			return (-1);
		}

		fclose(fildescr);
		return (1);
	}

	fildescr = fopen(filename, "a");

	if (fildescr == NULL)
	{
		return (-1);
	}

	fprintf(fildescr, "%s", text_content);
	fclose(fildescr);

	return (1);
}
