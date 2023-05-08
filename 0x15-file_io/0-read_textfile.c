#include "main.h"

#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to
 * POSIX standard output
 *
 * @filename: the address to the file
 * @letters: is the number of letters it should read and print
 *
 * Return: 0 if filename is NULL or failed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* initialize variables */
	char *holder;
	ssize_t o;
	ssize_t r;
	ssize_t w;

	/* check for NULL */
	if (filename == NULL)
		return (0);

	holder = malloc(sizeof(char) * letters);
	if (holder == NULL)
		return (0);

	/* pass file functions to variables */
	o = open(filename, O_RDONLY);
	r = read(o, holder, letters);
	w = write(STDOUT_FILENO, holder, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(holder);
		return (0);
	}

	free(holder);
	close(o);

	return (w);

}
