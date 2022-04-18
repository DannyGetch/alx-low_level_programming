#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to the string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i >= 0)
	{
		i--;
		putchar(*s);
		s--;
	}
	putchar('\n');
}
