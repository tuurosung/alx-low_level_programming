#include "main.h"

/**
 * append_text_to_file - appends text to the end a file
 *
 * @filename: the address to the name of the file
 * @text_content: the address to the content to write to the end of the file
 *
 * Return: 1 if failed, -1 if failed or NULL
 *
 */

int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, size);

	/* handle exceptions */
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
