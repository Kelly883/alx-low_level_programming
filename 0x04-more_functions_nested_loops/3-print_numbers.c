#include "main.h"
/**
*print_numbers - print from 0 to 9
*Return: void
*/

void print_numbers(void)
{
	char b = '0';

	while (b <= '9')
	{
		_putchar(b);
		b++;
	}

_putchar('\n');
}
