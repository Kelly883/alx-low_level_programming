#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -i;
	}
	if (x / 10)
	{
		print_number( / 10);
	}
	_putchar(x % 10 + '0');
}
