#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer of the first int
 * @b: pointer of the seconf int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
