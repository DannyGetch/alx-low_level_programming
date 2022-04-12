#include "main.h"
/**
 * print_alphabet_x10 - Prints a to z 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
		a++;
	}
}
