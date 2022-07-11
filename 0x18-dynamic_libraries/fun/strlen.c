#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
