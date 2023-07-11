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
	int fildes, _write, cnt = 0;

	if (filename == NULL)
		return (-1);

	if (filename != NULL)
	{
		while (text_content[cnt])
			cnt++;
	}

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (!text_content)
	{
		close(fildes);
		return (1);
	}

	_write = write(fildes, text_content, cnt);

	if (fildes == -1 || _write == -1)
		return (-1);

	close(fildes);

	return (1);
}
