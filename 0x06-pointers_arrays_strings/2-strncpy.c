#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;
	int i;

	l = 0;
	i = 0;

	for (; i < n; i++)
	{
		dest[l] = src[i];
		l++;
	}

	return (dest);
}
