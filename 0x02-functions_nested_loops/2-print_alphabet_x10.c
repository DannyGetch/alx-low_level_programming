#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		for (int i = 0; i < 26; i++)
			putchar('a' + i);
		putchar('\n');
		a++;
	}

	return (0);
}
