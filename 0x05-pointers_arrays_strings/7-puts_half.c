#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: the string to be processed
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	
	if (i % 2 != 0)
		j = (i / 2) + 1;
	else
		j = i / 2;

	while (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
