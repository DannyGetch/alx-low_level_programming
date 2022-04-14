#include "main.h"

/**
 * print_line - Prints ____
 *
 * @n: the numbers of times _ is printed
 *
 * Return: none
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
