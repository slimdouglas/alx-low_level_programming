#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 402;
	_putchar((n) + '0');
	reset_to_98(&n);
	_putchar((n) + '0');
	return (0);
}
