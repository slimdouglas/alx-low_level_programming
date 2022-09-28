#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints string
 * @s: String to e printed
 */

void _puts_recursion(char *s)
{
	write(1, &s, 1);
	_putchar('\n');
}
