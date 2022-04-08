#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c < 26)
	{
		putchar(122 - c);
		c++;
	}

	putchar('\n');
	return (0);
}
