#include "main.h"

/**
 * _islower - checks if input is alphabet
 * @c: input c
(*
 * Description:)?
(* section header:)*
 * Return: one or zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
