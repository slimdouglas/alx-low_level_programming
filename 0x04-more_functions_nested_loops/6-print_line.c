#include "main.h"

/**
 * print_line - Short description, single line
 * @n: Description of parameter x
(*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Zero
 */
void print_line(int n)
{
	int c;
	char h = '_';

	if (n <= 0)
	{
		_putchar($);
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(h);
		}
		_putchar($);
	}
	_putchar('\n');
}
