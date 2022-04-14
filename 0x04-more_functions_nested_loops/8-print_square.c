#include "main.h"

/**
 * print_square - Prints squares
 *
 * @size: Size of the square
 *
 * Return: None
 */

void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
		_putchar('\n');
}
