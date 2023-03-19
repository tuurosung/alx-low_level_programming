#include <stdio.h>
/**
 * main - print lowercase alphabets
 *
 * Description: when main is called, this program
 * prints lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
