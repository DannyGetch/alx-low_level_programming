#include "main.h"

/**
 * print_numbeers - Prints 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers()
{
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
