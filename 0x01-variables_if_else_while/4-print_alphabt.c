#include <stdio.h>
/**
 * main - print lowercase alphabets, skip q and e
 *
 * Description: when main is called, this program
 * prints lowercase alphabets except q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
