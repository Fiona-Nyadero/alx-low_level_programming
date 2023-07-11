#include "main.h"

/**
 * create_file - creates a new file
 * @filename: new file to create
 * @text_content: \0 str to write in filename
 *
 * Return: 1 if success, -1 if fail
 * i.e if file not created
 * or cannot be written/ write fails
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, _read, cnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[cnt])
			cnt++;
	}

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_read = write(fildes, text_content, cnt);

	if (fildes == -1 || _read == -1)
		return (-1);

	close(fildes);

	return (1);
}
