#include <stdio.h>
/**
 * main - print lowercase alphabets then uppercase
 *
 * Description: when main is called, this program
 * prints lowercase alphabets followed by
 * uppercase alphabets
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
