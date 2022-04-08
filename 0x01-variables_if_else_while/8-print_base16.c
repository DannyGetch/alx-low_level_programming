#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int c = 0;
	int d = 0;

        while (c < 10)
        {
                putchar(48 + c);
                c++;
        }

	while (d < 6)
	{
		putchar(97 + d);
		d++;
	}

        putchar('\n');
        return (0);
}
