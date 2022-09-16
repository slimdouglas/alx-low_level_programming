#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if input is upper case
 * @c : Integer to be checked
 * Return: returns null or 1
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
