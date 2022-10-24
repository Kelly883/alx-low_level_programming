#include "main.h"
/**
 * _strlen - returns the length.of a string.
 * @s: declaration of *s and paramters for the function _strlen
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
