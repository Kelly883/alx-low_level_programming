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
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
