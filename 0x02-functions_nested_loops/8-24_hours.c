#include "main.h"

/**
 * jack_bauer - prints evry hour and minute
(*
 * Description: Returns values of hrs and min)?
(* section header: Section description)*
 * Return: void no return value
 */
void jack_bauer(void)
{
	int hrs, mn;

	for (hrs = 0; hrs <= 23; ++hrs)
	{
		for (mn = 0; mn <= 59; ++mn)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((mn / 10) + 48);
			_putchar((mn % 10) + 48);
			_putchar('\n');
		}
	}
}
