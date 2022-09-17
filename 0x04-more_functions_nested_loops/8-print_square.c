#include "main.h"

/**
 * print_square - prints square, using size
 * @size: Description of parameter x
 * Return: zero
 */

void print_square(int size)
{
	int j, k;
	char p = '#';

	for(j = 1; j <= size; j++)
	{
		for(k = 1; k <= size; k++)
		{
			_putchar(p);
		}
	_putchar('\n');
	}
	return (0);
}
