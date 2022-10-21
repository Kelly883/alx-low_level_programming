#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (j = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
