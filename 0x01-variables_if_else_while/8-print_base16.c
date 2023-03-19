#include <stdio.h>
/**
 * main - print all the numbers of base16
 *
 * Description: when main is called, this program
 * prints all the numbers of base16 followed by
 * a new line
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
