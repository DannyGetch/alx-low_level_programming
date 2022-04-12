#include <main.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	for (int i = 0; i < 26; i++)
		_putchar('a' + i);
	_putchar('\n');
	return (0);
}
