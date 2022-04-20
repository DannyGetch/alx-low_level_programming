#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination
 * @src: Source
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int i;

	l = 0;
	i = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}

	return (dest);
}
