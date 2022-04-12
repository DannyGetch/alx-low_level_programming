#include <stdio.h>
/**
 * main - Entry
 * print_alphabet_x10 - function
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();

	return (0);
}

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		for (int i = 0; i < 26; i++)
			putchar('a' + i);
		putchar('\n');
		a++;
	}
}
