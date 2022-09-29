#include "main.h"
/**
 * _pow_recursion - calculates power of a number
 * @x: number
 * @y: is the power
 * Return: the power if higher than zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
