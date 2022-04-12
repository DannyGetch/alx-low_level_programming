#include "main.h"

/**
 * _isalpha - Checks if the parameter is a letter, lowercase or uppercase
 * @c: the parameter to be checked
 *
 * Return: 1 if it is. 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
