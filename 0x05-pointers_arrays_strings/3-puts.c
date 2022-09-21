#include "main.h"

/**
 * _puts - returns the string
 * @str: input string
 *
 * Return: returns the whole string
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
