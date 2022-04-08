#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 9)
		{
			putchar(48 + c);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(48 + c);

		c++;
	}

	putchar('\n');
	return (0);
}
