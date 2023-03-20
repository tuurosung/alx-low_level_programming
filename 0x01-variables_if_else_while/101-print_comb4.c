#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 *
 * Description: When called, program will return all possible
 * combinations of three digits without repeat
 * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
				continue;

				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');

	return (0);
}
