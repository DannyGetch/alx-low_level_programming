#include "main.h"

/**
 * print_diagonal - Prints \ diagonally
 *
 * @n: The number of times \ is printed
 *
 * Return: None
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');

		i++;
	}

	if (n <= 0)
		_putchar('\n');
}
