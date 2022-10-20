#include "main.h"

/**
 * print_line - printing lines required
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
