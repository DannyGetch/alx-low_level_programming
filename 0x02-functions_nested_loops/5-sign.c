#include "main.h"

/**
 * print_sign - Checks the sign of a number
 * @x: the number to be checked
 *
 * Return: 1 if it's greater than zero,
 * 0 if it's zero, -1 if it's less than zero
 */

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
