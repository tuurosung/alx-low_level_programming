#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the address to the name of the file
 * @text_content: the address to the content to write to the file
 *
 * Return: 1 if failed, -1 if failed or NULL
 *
 */

int create_file(const char *filename, char *text_content)
{
	/* initialize variables */
	int o;
	int w;
	int size = 0;

	/* check for NULL */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* loop and populate size */
		for (size = 0; text_content[size];)
			size++;

	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, size);

	/* handle exceptions */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
