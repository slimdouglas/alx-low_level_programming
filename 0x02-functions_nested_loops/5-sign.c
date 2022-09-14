#include"main.h"


/**
 * print_sign - prints the siggn of an integer
 * @n: int n input
(*
 * Description: determines the value of a number
 * if less than 1 more or zero)?
(* section header: none)*
 * Return: one if more than zero,zero and -1
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
