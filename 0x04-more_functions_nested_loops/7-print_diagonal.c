#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */
void print_diagonal(int n)
{
	int d = 0;
	int t = 0;

	if (n > 0)
	{
		while (d < n)
		{
			while (t < d)
			{
				_putchar(' ');				      t++;
			}
			d++;
			t = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
