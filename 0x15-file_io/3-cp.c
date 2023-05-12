#include "main.h"

#include <stdio.h>
#include <stdlib.h>


char *set_buff(char *file);
void close_f(int fd);

/**
 * set_buff - a function that sets asize space as buffer
 *
 * @file: the buffd file
 *
 * Return: the address of the space set aside
 */

char *set_buff(char *file)
{

	/* initialize variables */
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_f - a function that closes off a file
 *
 * @fd: the file descriptor to closed
 */

void close_f(int fd)
{
	int i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

/**
 * main - a program that copies the content of a file to another
 *
 * @argc: the params provided;
 * @argv: address array to the params
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	/* initialize variables */
	int src, dest, r, w;
	char *buff;

	/* validate argc */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}

	buff = set_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);

			free(buff);
			exit(98);
		}


		w = write(dest, buff, r);

		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);

			free(buff);
			exit(99);
		}

		r = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_f(src);
	close_f(dest);

	return (0);
}
