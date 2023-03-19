#include <stdio.h>
/**
 * main - print lower case alphabets in reverse
 *
 * Description: when main is called, this program
 * prints all lowercase alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	int n;

	n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
