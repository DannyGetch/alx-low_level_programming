#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int c;
	int d = 0;
	int e;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			e = 0;
			while (e < 10)
			{
				if (d != c  && d < c && d != e && c != e && c < e)
				{
					putchar('0' + d);
					putchar('0' + c);
					putchar('0' + e);

					if (c + d + e != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				e++;
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
