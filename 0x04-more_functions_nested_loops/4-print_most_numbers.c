#include "main.h"

/**
*print_most_numbers - print number from 0 to 9*Return: void
*/

void print_most_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
	if (!(b == '2' || b == '4'))
	_putchar(b);
	}
	_putchar('\n');
}
