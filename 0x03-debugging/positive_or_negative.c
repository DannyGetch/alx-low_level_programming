#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @n: argument
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{

	srand(time(0));

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}

