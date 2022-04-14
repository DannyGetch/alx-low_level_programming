#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 10, j, k;

	while (i--)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;

			if (j > 9)
			{
				k = j % 10;
				_putchar('1');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
