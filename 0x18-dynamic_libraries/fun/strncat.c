#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	l = 0;
	i = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (; src[i] != '\0' && i < n;)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';

	return (dest);
}
