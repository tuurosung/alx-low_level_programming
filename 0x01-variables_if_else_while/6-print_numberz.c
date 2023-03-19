#include <stdio.h>
/**
 * main - print single numbers from 0 to 9
 *
 * Description: when main is called, this program
 * prints all single digit numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);
	}
	putchar('\n');

	return (0);
}
