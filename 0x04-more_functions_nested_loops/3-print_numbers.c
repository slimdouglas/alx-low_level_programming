#include "main.h"
/**
 * print_numbers - Prints zero to nine
 * @void: returns null value
 */


void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i) + '0');
	}

	_putchar('\n');
}
