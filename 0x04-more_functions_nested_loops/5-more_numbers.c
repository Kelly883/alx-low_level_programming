#include "main.h"

/**
 * more_numbers - number more
 * Return: return nothing
 * this is nothing
 */

void more_numbers(void)
{

int a, c;
	for (a = 1; a <= 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar('1');
			_putchar(c % 10 + '0');
		}
			_putchar('\n');
		}
}
