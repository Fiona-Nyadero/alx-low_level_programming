#include "main.h"

/**
 * create_file - creates a neu file
 * @filename: neu file to create
 * @text_content: \0-term str to write in filename
 *
 * Return: 1 if success, -1 if fail
 * fail means file not created
 * or cannot be written/ write fails
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, _red, iterate = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[iterate])
			iterate++;
	}

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_red = write(fildes, text_content, iterate);

	if (fildes == -1 || _red == -1)
		return (-1);

	close(fildes);

	return (1);
}
