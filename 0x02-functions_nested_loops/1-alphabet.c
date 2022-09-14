#include "main.h"

/**
 * print_alphabet - prints a-z
 * @void:
(* 
 * Description: a-z)?
(* section header:)*
 * Return: zero
 */
void print_alphabet(void)
{
	int ny;

	for (ny = 'a'; ny <= 'z'; ++ny)
	{
		_putchar(ny);
	}
		_putchar('\n');
}
