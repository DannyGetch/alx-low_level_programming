#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: the string to be processed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;

	while (j < i)
	{
		putchar(str[j]);
		j += 2;
	}
	putchar('\n');
}
