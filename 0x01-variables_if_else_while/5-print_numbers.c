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
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	printf("\n");

	return (0);
}
