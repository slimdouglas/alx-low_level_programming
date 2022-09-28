#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints string
 * s: String to e printed
 * Return: prints string
 */

void _puts_recursion(char *s)
{
	return (write(1, &s, 1));
}
