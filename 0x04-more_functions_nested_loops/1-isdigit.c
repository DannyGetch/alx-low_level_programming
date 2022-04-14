#include "main.h"

/**
 * _isdigit - Checks if c is a digit
 *
 * @c: The characteer to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
