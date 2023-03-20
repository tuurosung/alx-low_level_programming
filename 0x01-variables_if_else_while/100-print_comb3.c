#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Description: When called, program will return all possible
 * combinations of two digits without repeat
 * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
