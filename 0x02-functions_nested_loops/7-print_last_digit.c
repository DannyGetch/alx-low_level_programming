#include "main.h"

/**
 * print_last_digit - Self explanatory
 * @x:the number whose last digit is to be printed
 *
 * Return: The last digit
 */

int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
		y *= -1;

	_putchar(y + '0');
	return (y);
}
