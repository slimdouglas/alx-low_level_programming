#include "main.h"

/**
 * function_name - prints 0 to 14 ten x
 * @parameterx: no value returned
 * Return: zero to fourteen
 */

void more_numbers(void)
{
	int a, b;
	for (a = 0; a >= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar((b) + '0');
		}
		_putchar('\n');
	}
}
