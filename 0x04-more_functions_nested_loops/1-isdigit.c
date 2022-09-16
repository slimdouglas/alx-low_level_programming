#include "main.h"

/**
 * _isdigit - check if input is digit
 * @c: input of character
 * Return: zero or on
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
