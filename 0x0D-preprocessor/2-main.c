#include <stdio.h>

/**
 * main - function that prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	/* using the __FILE__  macro */
	printf("%s\n", __FILE__);

	return (0);
}
