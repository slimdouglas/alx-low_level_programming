#include "main.h"

/**
 * times_table - generates times table of 9
(*
 * Description: Generates time table)?
(* section header:)*
 * Return: times table of nine
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + 48);
				/*get digit one*/
				_putchar((prod % 10) + 48);
				/*get digit two*/
			}
		}
		_putchar('\n');
	}
}
