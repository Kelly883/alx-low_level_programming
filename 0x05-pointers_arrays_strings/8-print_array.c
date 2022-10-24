include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: int to be  checked
 * @n: int to be  checked
 * Return: 0 
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
		if (c != n - 1)
		printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
printf("\n");
}
