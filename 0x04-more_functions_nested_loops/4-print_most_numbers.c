#include "main.h"

/**
 * function_name - zero to nine
 * @void: returns no value
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: no value
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		if ( i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar((i) + '0');
		}
	}
	_putchar('\n');
}
