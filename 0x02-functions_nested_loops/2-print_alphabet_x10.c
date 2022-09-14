#include "main.h"

/**
 * print_alphabet_x10- prints a-z 10x
 * @void: null value
(*
 * Description: a-z)?
(* section header: Section)*
 * Return: zero
 */
void print_alphabet_x10(void)
{
	int li, cn;

	for (li = 0; li <= 9; ++li)
	{
		for (cn = 'a'; cn <= 'z'; ++cn)
		{
			_putchar(cn);
		}
		_putchar('\n');
	}
}

