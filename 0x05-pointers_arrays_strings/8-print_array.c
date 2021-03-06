#include "main.h"

/**
 * print_array - prints n elements of an array
 *
 * @n: number of elements to be printed
 * @a: array to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
