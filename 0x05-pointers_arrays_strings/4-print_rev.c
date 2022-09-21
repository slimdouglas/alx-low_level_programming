#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: is a string
 *
 * Return: returns no value
 */

void print_rev(char *s)
{
	int c = '\0';

	while (s[c] != '0')
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
