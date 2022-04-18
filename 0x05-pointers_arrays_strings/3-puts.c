#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: parameter to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
