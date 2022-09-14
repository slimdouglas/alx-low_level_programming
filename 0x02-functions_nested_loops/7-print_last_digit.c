#include "main.h"

/**
 * print_last_digit- Short description, single line
 * @n: input
(*
 * Description: returns last digit)?
(* section header: none)
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int p;

	p = n % 10;
	if (p < 0)
	{
		p *= -1;
		_putchar('0' + p);
	}
	return (p);
}
	
