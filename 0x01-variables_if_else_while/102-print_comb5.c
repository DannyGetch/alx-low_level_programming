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
	int f;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			e = 0;
			while (e < 10)
			{
				f = 0;
				while (f < 10)
				{	
					if (c < f && d <= e)
					{
						putchar('0' + d);
						putchar('0' + c);
						putchar(' ');
						putchar('0' + e);
						putchar('0' + f);


						if (c + d + e + f != 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
					f++;
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
