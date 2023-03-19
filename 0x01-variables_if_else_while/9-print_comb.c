#include <stdio.h>
/**
 * main - print all single digit numbers
 *
 * Description: when main is called, this program
 * prints single digit numbers seprated by
 * followed by a space
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
