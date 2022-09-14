#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabet chars
 * @c: c var
(*
 * Description: checks for alphabets)?
(* section header: header)*
 * Return: zero or one
 */

int _isalpha(int c)
{
	int p = isalpha(c);

	if (p > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
